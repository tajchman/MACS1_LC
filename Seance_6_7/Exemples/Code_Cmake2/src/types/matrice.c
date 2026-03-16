#include "matrice.h"
#include <string.h>

void creeMatrice(Matrice *M, size_t n, size_t m, const char *s,
                 double (*initFunction)(size_t i, size_t j, size_t n, size_t m))
{
  size_t l = strlen(s);
  M->name = (char *) malloc(sizeof(char) * (l+1));
  strncpy(M->name, s, l+1);

  M->n = n;
  M->m = m;
  M->c = (double *) malloc(sizeof(double) * n * m);

  if (initFunction)
    initMatrice(M, initFunction);
}

void detruitMatrice(Matrice *M)
{
  free(M->name);
  if (M->c) {
    free(M->c);
    M->c = NULL;
  }
  M->n = 0L;
  M->m = 0L;
}

void copieMatrice(Matrice *dest, const Matrice *src)
{
  if (dest->n != src->n) {
    dest->n = src->n;
    free(dest->c);
    dest->c = (double *) malloc(sizeof(double) * src->n);
  }

}

void initMatrice(Matrice *M, double (*initFunction)(size_t i, size_t j, 
                                                    size_t n, size_t m))
{
  size_t i, j, n = M->n, m = M->m;
  for (i=0; i<n; i++) 
    for (j=0; j<m; j++) M->c[i*m + j] = initFunction(i, j, n, m);
}

void printMatrice(const Matrice *M)
{
  size_t i, j, n = M->n, m = M->m;
  double *c = M->c;

  printf("%s:\n", M->name);
  for (i=0; i<n; i++) {
    printf("%4lu:", i);
    for (j=0; j<m; j++)
      printf(" %12.5g", c[i*m+j]);
    printf("\n");
  }
  printf("\n");
}

