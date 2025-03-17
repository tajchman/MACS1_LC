#include "vecteur2.h"
#include <string.h>
#include <stdlib.h>

void construitVecteur(Vecteur *v, int n, const char *s)
{
  v->nom = s;
  v->n = n;
  v->c = (double*) malloc(sizeof(double)*v->n);
}

void detruitVecteur(Vecteur *vec)
{
  vec->nom = "";
  vec->n = 0;
  free(vec->c);
  vec->c = NULL;
}

void copieVecteurs(Vecteur *w, const Vecteur *v)
{
  if (w->n != v->n) {
    detruitVecteur(w);
    construitVecteur(w, v->n, v->nom);
    }
  memcpy(w->c, v->c, v->n * sizeof(double));
}