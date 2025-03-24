#include "derivee.h"

double derivee(double (*f) (double), double x, double h)
{
  return (f(x+h) - f(x-h))/(2*h);
}