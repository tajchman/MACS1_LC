#include <stdio.h>
#include "string.h"

#include "global.h"
#include "fonctions.h"

double f(double x)
{
  double r;
  printf("f: x = %g m = %g\n", x, m);
  
  r = x*m;
  printf("f: r = %g\n", r);
  return r;
}
