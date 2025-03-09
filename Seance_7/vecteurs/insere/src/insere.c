#include <stdio.h>
#include "vecteur.h"

void insere(Vecteur *v, int k, double x)
{
  int n_old = v->n;
  double *c_old = v->c;
  v->c = NULL;
  construitVecteur(v, n_old + 1, v->name);

  int i;
  for (i=0; i<k; i++)
    v->c[i] = c_old[i];
  for(i=k; i<n_old; i++)
    v->c[i+1] = c_old[i];
  
  v->c[k] = x;
}

int main()
{
  int n = 10;
  Vecteur v;
  construitVecteur(&v, 10, "v");

  for (int i=0; i<v.n; i++) v.c[i] = 2.0*i;

  afficheVecteur(&v);
  insere(&v, 6, 11.0);
  afficheVecteur(&v);
  
  detruitVecteur(&v);
  return 0;
}