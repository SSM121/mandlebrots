#include "Mandelbrot.hpp"

int Mandelbrot::fracCount(std::complex<double> c)
{
  std::complex<double> z(0.0, 0.0);
  for(int i = 0; i < m_iterations; i++)
  {
    z = z * z + c;
    if(std::abs(z) > 2)
    {
      return i;
    }
  }
  return m_iterations;
}

void Mandelbrot::calcVals()
{
  m_min.m_x = m_center.m_x - axisLength / 2.0f;
  m_max.m_x = m_center.m_x + axisLength / 2.0f;
  m_min.m_y = m_center.m_y - axisLength / 2.0f;
  m_max.m_y = m_center.m_y + axisLength / 2.0f;
}