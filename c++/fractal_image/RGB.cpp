#include "RGB.h"
namespace fractalimage{
RGB::RGB(double r, double g, double b):r(r),g(g),b(b){
}
RGB operator-(RGB& first,RGB& second){
  return RGB(first.r-second.r,first.g-second.g,first.b-second.b);
}

}
