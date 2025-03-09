#include <stdio.h>
#include <stdlib.h>
#include "vecteur.h"

int main()
{
  int i;
  Vecteur V = construitVecteur(10, "V");
  Vecteur W = construitVecteur(10, "W");

  for (i=0; i<V.n; i++) {
    V.c[i] = 2.5*i;
  }

  W = V;
  W.c[5] = -56.0;

  printf("%s\n", V.nom);
  for (i=0; i<V.n; i++) {
    printf("V[%d]: %9.1f\n", i, V.c[i]);
  }

  printf("%s\n", W.nom);
  for (i=0; i<W.n; i++) {
    printf("W[%d]: %9.1f\n", i, W.c[i]);
  }

  detruitVecteur(V);
  detruitVecteur(W);
  
  return 1;
}