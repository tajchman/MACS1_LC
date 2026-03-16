#include <stdlib.h> 
#include "vecteur.h"


void cree(vecteur *v, int n, const char *s)
{
  v->c = (double *) malloc(sizeof(double) * n);
  v->n = n;
  v->nom = s;
}

void detruit(vecteur *v)
{
  free(v->c);
  v->n = 0;
  v->nom = "";
}
