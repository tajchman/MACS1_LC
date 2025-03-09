#include <stdio.h>
#include "vecteur.h"

int main()
{
  int n = 10;
  Vecteur v;
  construitVecteur(&v, 10, "v");

  for (int i=0; i<v.n; i++) v.c[i] = 2.0*i;

  printf("debut\n");
  afficheVecteur(&v);
  insereVecteur(&v, 6, 11.0);
  printf("apres insertion de 11 dans v[6] (capacité = %d)\n", v.n_max);
  afficheVecteur(&v);
  supprimeVecteur(&v, 5);
  printf("apres suppression de v[5]\n");
  afficheVecteur(&v);
  
  detruitVecteur(&v);
  return 0;
}