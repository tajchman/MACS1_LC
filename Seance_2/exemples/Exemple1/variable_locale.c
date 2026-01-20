#include <stdio.h>

void calcul()
{
  int i;
  double v = 3.0;

  {
    double v = 4.7 + i;
    printf("v = %g\n", v);
  }
    printf("apres la boucle v = %lg\n", v);
}

int main()
{
  calcul();
  return 0;
}