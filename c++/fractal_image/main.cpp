#include<iostream>
#include<cstdint>
#include<memory>
#include<cmath>
#include"Bitmap.h"
#include"Mandelbrot.h"
#include"ZoomList.h"
using namespace std;
using namespace fractalimage;
void setRed(Bitmap &bitmap,int width, int height){
  for(int i=0;i<width;i++)
    for(int j=0;j<height;j++)
      bitmap.setPixel(i,j,255,0,0);
}
int main(){
  int const WIDTH = 800;
  int const HEIGHT = 600;
  Bitmap bitmap(WIDTH,HEIGHT);
  //setWhite(bitmap,WIDTH,HEIGHT);
  //scaling range of value between (-1,1)
  //double MAX=-9999999;
  //double MIN=9999999;
  ZoomList zoomList(WIDTH,HEIGHT);
  zoomList.add(Zoom(WIDTH/2,HEIGHT/2,2.0/WIDTH));
  zoomList.add(Zoom(256,HEIGHT-30,0.1));
  unique_ptr<int[]> histogram(new int[Mandelbrot::MAX_ITERATIONS]{});
  unique_ptr<int[]> fractal(new int[HEIGHT*WIDTH]{});
  for(int x=0;x<WIDTH;x++){
    for(int y=0;y<HEIGHT;y++){
        /*double xfractal=(x-(WIDTH/2)-200)*2.0/HEIGHT;
        double yfractal=(y-(HEIGHT/2))*2.0/HEIGHT;
        int iterations=Mandelbrot::getIterations(xfractal,yfractal);*/
        pair<double,double> coords=zoomList.doZoom(x,y);
        int iterations=Mandelbrot::getIterations(coords.first,coords.second);
        fractal[y*WIDTH+x]=iterations;
        if(iterations!=Mandelbrot::MAX_ITERATIONS)
          histogram[iterations]++;
    }
  }
  //Validating histogram
  int total=0;
  for(int i=0;i<Mandelbrot::MAX_ITERATIONS;i++){
  total=total+histogram[i];}

  for(int x=0;x<WIDTH;x++){
    for(int y=0;y<HEIGHT;y++){
      int iterations=fractal[y*WIDTH+x];
      uint8_t red=0;
      uint8_t green=0;
      uint8_t blue=0;
      if(iterations<Mandelbrot::MAX_ITERATIONS){
      double hue=0;
      for(int i=0;i<iterations;i++)
          hue+=((double)histogram[i])/total;
          green=hue*255;
      bitmap.setPixel(x,y,red,green,blue);}
    }
  }
  bitmap.write("test.bmp");
  cout<<"finished\n";
  return 0;
}
