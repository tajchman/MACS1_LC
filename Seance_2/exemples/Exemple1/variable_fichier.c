#include <stdio.h>

static double v;

void calcul()
{
  v += 4.7;
  printf("v = %g\n", v);
}

int main()
{
  v = 1.0;
  calcul();
  return 0;
}