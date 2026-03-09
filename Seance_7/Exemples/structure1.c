#include <stdio.h>
#include <stdlib.h>

struct S
{
  const char * nom;
  int n;
  double * c;
};

void calcule(struct S z)
{
  int i;
  for (i=0; i<z.n; i++)
    z.c[i] = i*i*1.0;
}

void affiche(struct S x)
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
  struct S v;

  v.nom = "V";
  v.n = N;
  v.c = (double *) malloc(sizeof(double) * v.n);

  calcule(v);
  affiche(v);

  return 0;
}