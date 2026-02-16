#ifndef _MATRICE_H
#define _MATRICE_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

struct _Matrice {
  char *name;
  size_t n, m;
  double *c;
};

typedef struct _Matrice Matrice;

void creeMatrice(Matrice *V, size_t n, size_t m, const char *s,
  double (*initFunction)(size_t i, size_t j, size_t n, size_t m));

void detruitMatrice(Matrice *V);
void copieMatrice(Matrice *dest, const Matrice *src);
void initMatrice(Matrice *M, double (*initFunction)(size_t i, size_t j, 
                                                    size_t n, size_t m));

void printMatrice(const Matrice *v, FILE *f);

#endif
