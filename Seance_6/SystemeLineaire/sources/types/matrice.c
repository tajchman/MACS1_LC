#include "matrice.h"
#include <stdlib.h>

void alloueMatrice(Matrice *M, int n, int m)
{
}

void libereMatrice(Matrice *M)
{
}

void lectureMatrice(Matrice *M, FILE * f)
{
  int i, j, n, m, ncoefs;
  int k, l;
  double v;

  fscanf(f, "%d %d %d", &n, &m, &ncoefs);
  alloueMatrice(M, n, m);


  for (i=0; i<n; i++) {
    for (j=0; j<m; j++) {
    /* Mettre à 0 les coefficients de M */
    }
  }
  
  for (i=0; i<ncoefs; i++) {
    fscanf(f, "%d %d %lg", &k, &l, &v);
    k = k-1; /* se rappeler que les indices en C */
    l = l-1; /* commencent par 0                 */

/*  ranger la valeur de v dans le coefficient M(k,l) */
  }
}

void afficheMatrice(Matrice *M)
{
  /*
  Completer
    n = nombre de lignes de M
    m = nombres de colonnes de M

  int i, j, n, m;

  for (i=0; i<n; i++) {
    for (j=0; j<m; j++) {
      printf(" %14.5g", ??? )
    }
    printf("\n")
  }
  */
}
