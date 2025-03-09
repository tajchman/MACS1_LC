#include <stdio.h>
#include "vecteur.h"

void supprime(Vecteur *v, int k)
{
  int i;
  for(i=k; i<v->n-1; i++)
    v->c[i] = v->c[i+1];
  v->n -= 1;
}

int main()
{
  int n = 10;
  Vecteur v;
  construitVecteur(&v, 10, "v");

  for (int i=0; i<v.n; i++) v.c[i] = 2.0*i;

  afficheVecteur(&v);
  supprime(&v, 5);
  afficheVecteur(&v);
  
  detruitVecteur(&v);
  return 0;
}