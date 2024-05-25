#include "Point.hpp"
#include <complex>
class Fractal
{
  public:
  string m_type = 'mandelbrot';
  int m_pixels = 640;
  float m_axisLength = 4.0;
  float m_pixelSize = 0.00625;
  int m_iterations = 100;
  Point m_min(-2.0, -2.0);
  Point m_max(2.0, 2.0);
  Point m_center(2.0, 2.0);
  string m_imageName = "fullmandelbrot.png";
  Fractal(string type, int pixels, float axisLength, float pixelSize, int iterations, string filename, Point center) :
    m_type(type),
    m_pixels(pixels),
    m_axisLength(axisLength),
    m_pixelSize(pixelSize),
    m_iterations(iterations),
    m_imageName(filename),
    m_center(center)
  {}
  virtual int fracCount(std::complex<double> c) = 0;
}