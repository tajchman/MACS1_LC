#include <stdio.h>
#include "vecteur.h"
#include "matrice.h"
#include "operations.h"

#define UNUSED(x) (void)(x)

double init_u(size_t i, size_t n)
{
  (void) i;
  (void) n;
  return 0.0;
}

double init_f(size_t i, size_t n)
{
  return 10.0 * i/(n-1);
  return (i>n/4 && i<3*n/4) ? 1.0 : 0.0;
}

double init_m(size_t i, size_t j, size_t n, size_t m)
{
  double dx2 = 1.0/((n-1)*(n-1));
  UNUSED(m);
  double x = 0.0;
  if (i == j) x = 3.0/dx2;
  if (j>0 && i == j-1) x = -1./dx2;
  if (i>0 && i-1 == j) x = -1./dx2;
  return x;
}

int main(int argc, char **argv)
{
  char *end = NULL;
  fprintf(stderr, "%d", argc);
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
  Vecteur u, f;
  Matrice A;
  creeVecteur(&u, n,    "u", NULL);
  creeVecteur(&f, n,    "f",  init_f);
  creeMatrice(&A, n, n, "A",  init_m);

  if (n < 10) {
    printVecteur(&u, stdout);
    printVecteur(&f, stdout);
    printMatrice(&A, stdout);
  }

  size_t iter;
  bool succes;
  succes = gradconj(&u, &A, &f, 1e-12, &iter);
  if (!succes)
    printf("\n\tpas de convergence du gradient conjugue\n");
  else
    printf("\n\tconvergence en %lu iterations\n", iter);

  FILE * f_res = fopen("res", "w");
  printVecteur(&u, f_res);
  fclose(f_res);

  detruitVecteur(&u);
  detruitVecteur(&f);
  detruitMatrice(&A);
  
  return 0;
}
