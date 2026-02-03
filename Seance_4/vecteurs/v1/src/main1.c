#include <stdio.h>
#include <stdlib.h>

struct _vecteur
{
  const char *nom;
  int n;
  double *c;
};
typedef struct _vecteur vecteur;

int main()
{
  int i;
  vecteur V;
  V.nom = "V";
  V.n = 10;
  V.c = (double*) malloc(sizeof(double)*V.n);

  for (i=0; i<V.n; i++) {
    V.c[i] = 2.5*i;
  }

  printf("%s\n", V.nom);
  for (i=0; i<V.n; i++) {
    printf("V[%d]: %9.1f\n", i, V.c[i]);
  }

  free(V.c);
  V.c = NULL;
  V.n = 0;

  return 1;
}