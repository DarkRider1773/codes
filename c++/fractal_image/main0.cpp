#include<iostream>
#include"FractalCreator.h"
using namespace std;
using namespace fractalimage;
int main(){
  FractalCreator fractalCreator(800,600);

  fractalCreator.addRange(0.0,RGB(0,0,0));
  fractalCreator.addRange(0.3,RGB(255,0,0));
  fractalCreator.addRange(0.5,RGB(255,255,0));
  fractalCreator.addRange(1.0,RGB(255,255,255));
  cout<<fractalCreator.getRange(310)<<endl;
  fractalCreator.addZoom(Zoom(126,292,0.1));
  fractalCreator.addZoom(Zoom(343,373,0.1));
  fractalCreator.run("test.bmp");
  cout<<"finished\n";
  return 0;
}
