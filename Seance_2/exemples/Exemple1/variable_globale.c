#include <stdio.h>

double v;

void calcul()
{
  v += 4.3;
  printf("v = %g\n", v);
}

int main()
{
  v = 1.0;
  calcul();
  return 0;
}