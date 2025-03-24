#include "matrice.h"
#include <stdlib.h>
#include <string.h>

void alloueMatrice(Matrice *M, const char *s, int n, int m)
{
  M->nom = (char *) malloc(sizeof(char) * (strlen(s) + 1));
  strcpy(M->nom, s);
  M->n = n;
  M->m = m;
  M->coeff = (double *) malloc(n*m*sizeof(double));
}

void libereMatrice(Matrice *M)
{
  M->n = 0;
  M->m = 0;
  free(M->coeff);
  M->coeff = NULL;
  free(M->nom);
  M->nom = NULL;
}

void lectureMatrice(Matrice *M, const char *fileName)
{
  int i, j, n, m, ncoefs;
  int k, l;
  double v;

  FILE *f = fopen(fileName, "r");
  fscanf(f, "%d %d %d", &n, &m, &ncoefs);
  alloueMatrice(M, fileName, n, m);

  for (i=0; i<n*m; i++) {
    M->coeff[i] = 0.0;
  }
  
  for (i=0; i<ncoefs; i++) {
    fscanf(f, "%d %d %lg", &k, &l, &v);
    k = k-1;
    l = l-1;
    setMIJ(M, k, l, v);
  }
}

void afficheMatrice(Matrice *M)
{
  int i, j, k, n, m;

  printf("\n%s\n", M->nom);
  k = 0;
  for (i=0; i<M->n; i++) {
    for (j=0; j<M->m; j++, k++) {
      printf(" %14.5g", M->coeff[k]);
    }
    printf("\n");
  }
}
