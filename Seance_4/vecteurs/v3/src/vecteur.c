#include "vecteur.h"
#include <stdio.h>
#include <stdlib.h>

void construitVecteur(Vecteur *v, int n, const char *s)
{
  v->name = s;
  if (v->n == n) return;
  v->n = n;
  v->c = (double*) malloc(sizeof(double) * v->n);
}

void detruitVecteur(Vecteur *vec)
{
  vec->n = 0;
  if (vec->c != NULL) 
    free(vec->c);
  vec->c = NULL;
}

void copieVecteur(Vecteur *W, const Vecteur *V)
{
  if (W->n != V->n)
    construitVecteur(W, V->n, W->name);
  for (int i=0; i<V->n; i++) W->c[i] = V->c[i];
}

void afficheVecteur(const Vecteur *V)
{
  printf("\n%s\n", V->name);
  for (int i=0; i<V->n; i++) {
    printf("\t%-3d: %9.1f\n", i, V->c[i]);
  }
}