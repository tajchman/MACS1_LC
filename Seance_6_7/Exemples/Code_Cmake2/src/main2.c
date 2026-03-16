#include <stdio.h>
#include "vecteur.h"
#include "matrice.h"
#include "operations.h"

double init_a(size_t i, size_t n)
{
  (void) n;
  return 1.0*i;
}

double init_b(size_t i, size_t n)
{
  return 10.0 * i/(n-1);
  return (i>n/4 && i<3*n/4) ? 1.0 : 0.0;
}

int main(int argc, char **argv)
{
  char *end = NULL;
  size_t n;
  if (argc == 1)
    n = 6;
  else {
    n = strtoul(argv[1], &end, 10);
    if (!end || *end != '\0') {
      printf("le 1er parametre doit etre un nombre entier\n");
      exit(-1);
    }
  }
  Vecteur a, b;
  creeVecteur(&a, n,    "a",  init_a);
  creeVecteur(&b, n,    "b",  init_b);

  if (n < 10) {
    printVecteur(&a);
    printVecteur(&b);
  }

  double d = dot(&a, &b);

  printf("produit scalaire : %g\n", d);

  detruitVecteur(&a);
  detruitVecteur(&b);
  
  return 0;
}