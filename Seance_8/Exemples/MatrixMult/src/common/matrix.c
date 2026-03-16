#include "matrix.h"

void allocateMatrix(Matrix * M, size_t n, size_t m)
{
  M->n = n;
  M->m = m;
  M->data = (double *) malloc(sizeof(double)*n*m);
}

void freeMatrix(Matrix *M)
{
  free(M->data);
  M->data = NULL;
  M->m = 0L;
  M->n = 0L;
}

void initMatrix(Matrix *M, double (*f)(size_t i, size_t j))
{
  size_t i, j;

  for (i=0; i<M->n; i++)
    for (j=0; j<M->m; j++)
      coeff((*M), i, j) = f(i,j);
}

void zeroMatrix(Matrix *M)
{
  size_t i, j;

  for (i=0; i<M->n; i++)
    for (j=0; j<M->m; j++)
      coeff((*M), i, j) = 0.0;
}