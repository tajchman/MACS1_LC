#include "matrice_creuse.h"
#include <stdlib.h>
#include <stdio.h>

void newSparseMatrix(sparseMatrix *M, 
                      int n, int m, size_t nc)
{
  M->nc = nc;
  M->n = n;
  M->m = m;
  M->I = (int *) malloc(nc * sizeof(int));
  M->J = (int *) malloc(nc * sizeof(int));
  M->V = (double *) malloc(nc * sizeof(double));
}

void freeSparseMatrix(sparseMatrix *M)
{
  free(M->I); M->I = NULL;
  free(M->J); M->J = NULL;
  free(M->V); M->V = NULL;
  M->nc = 0L;
  M->m = M->n = 0;
}

void readSparseMatrix(sparseMatrix *M, const char *fileName)
{
  int n, m;
  size_t nc;
  FILE * f = fopen(fileName, "r");
  char buffer[10000];
  buffer[9999] = '\0';

  if (fgets(buffer, sizeof buffer, f) == NULL) {
    printf("empty file %s\n", fileName);
    exit(-1);
  }
  if (fscanf(f, "%d %d %zu", &n, &m, &nc) < 3) {
    printf("%s format error\n", fileName);
    exit(-2);
  }
  printf("n = %d m = %d nc = %zu\n", n, m, nc);

  newSparseMatrix(M, n, m, nc);

  for (size_t ic=0; ic<nc; ic++)
    if (fscanf(f, "%d %d %lg", &(M->I[ic]), &(M->J[ic]), &(M->V[ic])) < 3) {
      printf("%s format error line %zd\n", fileName, ic+2);
      exit(-2);
    }
  fclose(f);
}

void printSparseMatrix(sparseMatrix *M)
{
  
}

void transposeSparseMatrix(sparseMatrix *M)
{
  /* A compléter */
}