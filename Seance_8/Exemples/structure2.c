#include <stdio.h>
#include <stdlib.h>

struct _vecteur
{
  const char * nom;
  int n;
  double * c;
};
typedef struct _vecteur Vecteur;

void calcule(Vecteur z)
{
  int i;
  for (i=0; i<z.n; i++)
    z.c[i] = i*i*1.0;
}

void affiche(Vecteur x)
{
  int i;
  printf("\nvecteur %s\n", x.nom);
  for (i=0; i<x.n; i++)
    printf("   %d: %10.4f\n", i, x.c[i]);
  printf("\n");
}

int main()
{
  int N = 10;
  Vecteur v= {"V", N, (double *) malloc(sizeof(double) * v.n)};

  calcule(v);
  affiche(v);

  return 0;
}
