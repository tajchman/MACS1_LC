
#ifndef  _VECTEUR_H
#define  _VECTEUR_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

struct _Vecteur {
  char *name;
  size_t n;
  double *c;
};

typedef struct _Vecteur Vecteur;

void creeVecteur(Vecteur *V, size_t n, const char *s,
                 double (*initFunction)(size_t i, size_t n));

void detruitVecteur(Vecteur *V);
void copieVecteur(Vecteur *dest, const Vecteur *src);

void initVecteur(Vecteur *v, double (*initFunction)(size_t i, size_t n));

void printVecteur(const Vecteur *v, FILE *f);


#endif
