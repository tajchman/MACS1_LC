#ifndef __VECTEUR_H
#define __VECTEUR_H

#include <stddef.h>
#include <stdio.h>

typedef struct _vecteur {
  char *nom;
  int n;
  double * coeff;
} Vecteur;

static double getVI(Vecteur *V, int i);
inline double getVI(Vecteur *V, int i) {
  return V->coeff[i];
}

static void setVI(Vecteur *V, int i, double v);
inline void setVI(Vecteur *V, int i, double v) {
  V->coeff[i] = v;
}

void setVecteur(Vecteur *v, double (*f)(int));
void afficheVecteur(Vecteur *V);

void alloueVecteur(Vecteur *v, const char *s, size_t n);
void libereVecteur(Vecteur *v);

void lectureVecteur(Vecteur *v, FILE * f);
void ecritureVecteur(Vecteur *v, FILE * f);

#endif
