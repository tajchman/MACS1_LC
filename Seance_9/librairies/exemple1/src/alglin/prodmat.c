#include "alglin.h"

void prodMatVec(Vecteur *Y, Matrice *A, Vecteur *X)
{
  int i,j;
  double s;

  for (i=0; i<A->n; i++) {
    s = 0.0;
    for (j=0; j<A->m; j++)
      s += getMIJ(A, i, j) * getVI(X, j);
    setVI(Y, i, s);
  }
}
