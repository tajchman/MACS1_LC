#include "vecteur.h"
#include <string.h>

void creeVecteur(Vecteur *V, size_t n, const char *s,
                 double (*initFunction)(size_t i, size_t n))
{
  size_t l = strlen(s);
  V->name = (char *) malloc(sizeof(char) * (l+1));
  strncpy(V->name, s, l+1);

  V->n = n;
  V->c = (double *) malloc(sizeof(double) * n);
  if (initFunction)
      for (size_t i=0; i<n; i++) V->c[i] = initFunction(i, n);
    else
      for (size_t i=0; i<n; i++) V->c[i] = 0.0;
}

void detruitVecteur(Vecteur *V)
{
  free(V->name);
  if (V->c) {
    free(V->c);
    V->c = NULL;
  }
  V->n = 0;
}

void copieVecteur(Vecteur *dest, const Vecteur *src)
{
  size_t i, n = src->n;
  if (dest->n != n) {
    dest->n = n;
    free(dest->c);
    dest->c = (double *) malloc(sizeof(double) * n);
  }
  for (i=0L; i<n; i++)
    dest->c[i] = src->c[i];

}

void printVecteur(const Vecteur *v, FILE *f)
{
  size_t i, n = v->n;

  fprintf(f, "# %s:\n", v->name);
  for (i=0; i<n; i++)
    fprintf(f, "%4lu %g\n", i, v->c[i]);
  fprintf(f, "\n");

}
