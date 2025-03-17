#include <stdio.h>

double valabs(double);

inline double valabs(double x) {
  if (x >= 0) return x; else return -x;
}

double racine(double x)
{
  double r, r_next = x;
  do
  {
    r = r_next;
    r_next = 0.5*(r + x/r);
  } while (valabs(r - r_next) > 1e-10);
  r = r_next;
  return r;
}

int main()
{
  double x, y;
  printf("x ? ");
  scanf("%lg", &x);

  y = racine(x);
  printf("racine(%lg) = %15.10lg (vérification %lg)\n", x, y, y*y);
  return 0;
}