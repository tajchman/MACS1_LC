#ifndef __MATRICE_H
#define __MATRICE_H

#include <stddef.h>
#include <stdio.h>

typedef struct _matrice {
  char *nom;
  int n, m;
  double *coeff;
} Matrice;

static double getMIJ(Matrice *M, int i, int j);
inline double getMIJ(Matrice *M, int i, int j) {
  return M->coeff[i * M->m + j];
}

static void setMIJ(Matrice *M, int i, int j, double v);
inline void setMIJ(Matrice *M, int i, int j, double v) {
  M->coeff[i * M->m + j] = v;
}

void alloueMatrice(Matrice *M, const char *s, int n, int m);
void libereMatrice(Matrice *M);

void lectureMatrice(Matrice *M, const char *fileName);
void ecritureMatrice(Matrice *M, const char *fileName);

void afficheMatrice(Matrice *M);

#endif
