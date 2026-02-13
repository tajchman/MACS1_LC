#include "vecteur.h"
#include <stdlib.h>
#include <string.h>

void alloueVecteur(Vecteur *v, const char *s, size_t n)
{
  v->nom = (char *) malloc(sizeof(char)* (strlen(s) + 1));
  strcpy(v->nom, s);
  v->n = n;
  v->coeff = (double *) malloc(sizeof(double) * n);
}

void libereVecteur(Vecteur *v)
{
  free(v->coeff);
  v->coeff = NULL;
  free(v->nom);
  v->nom = NULL;
  v->n = 0; 
}

void setVecteur(Vecteur *v, double (*f)(int))
{
  for (int i=0; i<v->n; i++)
    v->coeff[i] = f(i);
}

void afficheVecteur(Vecteur *V)
{
  printf("\n%s\n", V->nom);
  for (int i=0; i<V->n; i++)
    printf(" %14.5g\n", V->coeff[i]);
  printf("\n");
}
