#include <stdio.h>
#include <assert.h>

double valabs(double);

inline double valabs(double x) {
  if (x >= 0) return x; else return -x;
}

double racine(double x)
{
  double r, r_next = x;
  assert(x >= 0);

  if (x > 0.0) {
    do {
      r = r_next;
      r_next = 0.5*(r + x/r);
    } while (valabs(r - r_next) > 1e-10);
    r = r_next;
  }
  else
    r = x;
  return r;
}

int main()
{
  double x, y;
  printf("x ? ");
  scanf("%lg", &x);
  /*
    if (x < 0) { 
      printf("entrer un nombre positif ou nul"); exit(-1);
      }
  */
  y = racine(x);
  printf("racine(%lg) = %15.10lg (vérification %lg)\n", x, y, y*y);
  return 0;
}