#include <stdio.h>
#include <stdlib.h>
#include "vecteur.h"

int main()
{
  int i;
  Vecteur V;
  construitVecteur(&V, 10, "V");

  for (i=0; i<V.n; i++) {
    V.c[i] = 2.5*i;
  }

  afficheVecteur(&V);

  detruitVecteur(&V);

  return 1;
}