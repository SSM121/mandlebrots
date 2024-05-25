#include "Fractal.hpp"
#include "Point.hpp"

#include <complex>

class Mandelbrot : public Fractal
{
    //constructor just calls the base constructor
    Mandelbrot(string type, int pixels, float axisLength, float pixelSize, int iterations, string filename, Point center) :
        Fractal(string type, int pixels, float axisLength, float pixelSize, int iterations, string filename, Point center) {}
    int fracCount(std::complex<double> c);
    void calcVals();
}