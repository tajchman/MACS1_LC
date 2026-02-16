#include <stdio.h>
#include "string.h"

double f(int n)
{
  double resultat;
  printf("f: n = %d\n", n);
  resultat = n*2.0;
  return resultat;
}

int main()
{
  int k = 2;
  int n = 10*k;
  printf("f(%d) = %g\n", n, f(n));
  return 0;
}

