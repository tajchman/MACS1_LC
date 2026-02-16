#include <stdio.h>
#include "string.h"

extern double m;
double f(double x)
{
  double r;
  printf("f: x = %g m = %g\n", x, m);

  r = x*m;
  printf("f: r = %g\n", r);
  return r;
}
