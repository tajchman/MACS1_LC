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

struct Info
{
  const char *message;
  double h;
  double (*p) (double);
  double (*verification) (double);
};

void affiche(struct Info *info)
{
  double x;
  int i;
  
  printf("\n%s\n", info->message);
  for (i=0; i<11; i++)
  {
    x = i*0.1;
    printf("x = %3.1g", x);
    printf("  f(x) = %12.7g", p(x));
    printf("  df/dx(x) = %12.7g", derivee(info->p, x, info->h));  
    printf("  val. exacte = %12.7g\n", info->verification(x));
  }
}

int main(int argc, char **argv)
{
  int i;
  double x;
  char *end;
  struct Info info;

  if (argc > 1) {
    info.h = strtod(argv[1], &end);
    if ((*end != '\0') || h <= 0.0) {
      printf("usage : %s <reel strictement positif>\n", argv[0]);
      exit(-1);
    } 
  }
  else info.h = 1e-4;

  printf("h = %g\n", info.h);
  
  info.message = "sinus";
  info.p = sin;
  info.verification = cos;
  affiche(&info);

  info.message = "fonction utilisateur x*x";
  info.p = carre;
  info.verification = dcarre;
  affiche(&info);

  return 0;
}