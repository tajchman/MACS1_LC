#include "vecteur.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void construitVecteur(Vecteur *v, int n, const char *s)
{
  v->name = s;
  v->n = n;
  v->n_max = n;
  v->c = (double*) malloc(sizeof(double) * v->n_max);
}

void detruitVecteur(Vecteur *vec)
{
  vec->n = 0;
  vec->n_max = 0;
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
    printf("\t%3d: %9.1f\n", i, V->c[i]);
  }
}

void ajusteCapaciteVecteur(Vecteur *v)
{
  if (v->n > 0.75 * v->n_max) {
    v->n_max *= 2;
  }
  else if (v->n < v->n_max/2) {
    v->n_max /= 2;
  }
  else {
    return;
  }

  double *c_old = v->c;
  v->c = (double *) malloc(sizeof(double) * v->n_max);
  memcpy(v->c, c_old, v->n * sizeof(double));
}

void insereVecteur(Vecteur *V, int k, double x)
{
  int i;
  ajusteCapaciteVecteur(V);

  for (i=V->n; i>k; i--)
    V->c[i] = V->c[i-1];
  V->c[k] = x;
  V->n += 1;
}

void supprimeVecteur(Vecteur *V, int k)
{
  int i;
  ajusteCapaciteVecteur(V);

  for (i=k; i<V->n; i++)
    V->c[i] = V->c[i+1];
  V->n -= 1;
}