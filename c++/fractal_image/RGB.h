#ifndef RGB_H
#define RGB_H

namespace fractalimage{
struct RGB
{
public:
  double r;
  double g;
  double b;
  RGB(double , double, double);
};
RGB operator-(RGB& first,RGB& second);
}
#endif // RGB_H
