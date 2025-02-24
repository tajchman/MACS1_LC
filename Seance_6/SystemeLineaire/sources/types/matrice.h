#ifndef __MATRICE_H
#define __MATRICE_H

#include <stddef.h>
#include <stdio.h>

struct _matrice {
};

typedef struct _matrice Matrice;

void alloueMatrice(Matrice *M, int n, int m);
void libereMatrice(Matrice *M);

void lectureMatrice(Matrice *M, FILE * f);
void ecritureMatrice(Matrice *M, FILE * f);

void afficheMatrice(Matrice *M);

#endif
