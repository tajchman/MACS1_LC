#include <stdio.h>
#include "string.h"

double f(int n)
{
  double resultat;
  printf("f: n = %s\n", n);
  resultat = n*2.0;
}

double main(int k)
{
  int n = 10*k;
  printf("n = %d\n", f(n));
  return 3.5;
}

