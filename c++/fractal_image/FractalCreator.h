#ifndef FRACTALCREATOR_H
#define FRACTALCREATOR_H
#include<string>
#include "Zoom.h"
#include<cstdint>
#include<memory>
#include<cmath>
#include"Bitmap.h"
#include"Mandelbrot.h"
#include"ZoomList.h"
#include"RGB.h"
#include<cassert>
using namespace std;
namespace fractalimage{
class FractalCreator
{   private:
        int const m_width;
        int const m_height;
        unique_ptr<int[]> m_histogram;
        unique_ptr<int[]> m_fractal;
        Bitmap m_bitmap;
        ZoomList m_zoomList;
        int m_total{0};


        vector<int> m_ranges;
        vector<RGB> m_colors;
        vector<int> m_rangeTotals;

        bool m_bGotFirstRange{false};



        void calculateIteration();
        void drawFractal();
        void writeBitmap(string name);
        void calculateTotalIterations();
        void calculateRangeTotals();


    public:
        int getRange(int iterations) const;
        FractalCreator(int,int);
        virtual ~FractalCreator();
        void addZoom(const Zoom& zoom);
        void run(string);
        void addRange(double rangeEnd,const RGB& rgb);
};
}
#endif // FRACTALCREATOR_H
