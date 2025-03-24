#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "derivee.h"

double carre(double x)
{
  return x*x;
}

double dcarre(double x)
{
  return 2.0*x;
}

void affiche(const char *message, double (*p) (double), 
                        double h, double (*verification) (double))
{
  double x;
  int i;
  
  printf("\n%s\n", message);
  for (i=0; i<11; i++)
  {
    x = i*0.1;
    printf("x = %3.1g", x);
    printf("  f(x) = %12.7g", p(x));
    printf("  df/dx(x) = %12.7g", derivee(p, x, h));  
    printf("  val. exacte = %12.7g\n", verification(x));
  }
}

int main(int argc, char **argv)
{
  int i;
  double x, dx, h;
  char *end;

  if (argc > 1) {
    h = strtod(argv[1], &end);
    if ((*end != '\0') || h <= 0.0) {
      printf("usage : %s <reel strictement positif>\n", argv[0]);
      exit(-1);
    } 
  }
  else h = 1e-4;

  printf("h = %g\n", h);
  affiche("sinus", sin, h, cos);
  affiche("fonction utilisateur x*x", carre, h, dcarre);
}