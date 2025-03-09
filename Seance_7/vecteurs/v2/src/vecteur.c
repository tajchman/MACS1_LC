#include "vecteur.h"

#include <stdlib.h>

Vecteur construitVecteur(int n, const char *s)
{
  Vecteur vv;
  vv.nom = s;
  vv.n = n;
  vv.c = (double*) malloc(sizeof(double)*vv.n);
  return vv;
}

void detruitVecteur(Vecteur vec)
{
  vec.nom = "";
  vec.n = 0;
  free(vec.c);
  vec.c = NULL;
}