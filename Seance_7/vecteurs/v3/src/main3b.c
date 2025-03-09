#include <stdio.h>
#include <stdlib.h>
#include "vecteur.h"

int main()
{
  int i;
  Vecteur V, W;
  construitVecteur(&V, 10, "V");
  construitVecteur(&W, 10, "W");

  for (i=0; i<V.n; i++) {
    V.c[i] = 2.5*i;
  }

  copieVecteur(&W, &V);
  W.c[5] = -56.0;

  afficheVecteur(&V);
  afficheVecteur(&W);

  detruitVecteur(&V);
  detruitVecteur(&W);
  
  return 1;
}