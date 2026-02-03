#include <stdio.h>
#include <stdlib.h>
#include "vecteur.h"

int main()
{
  int i;
  Vecteur V = construitVecteur(10, "V");

  for (i=0; i<V.n; i++) {
    V.c[i] = 2.5*i;
  }

  for (i=0; i<V.n; i++) {
    printf("V[%d]: %9.1f\n", i, V.c[i]);
  }

  detruitVecteur(V);

  return 1;
}