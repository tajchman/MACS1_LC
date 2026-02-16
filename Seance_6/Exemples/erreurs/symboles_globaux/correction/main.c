#include <stdio.h>
#include "string.h"
#include "fonctions.h"
#include "global.h"

double m;

int main()
{
  m = 5.5;
  int n = 10;
  printf("main: f(%d) = %g\n", n, f(n));
  return 0;
}

