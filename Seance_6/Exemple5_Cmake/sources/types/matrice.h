#ifndef __MATRICE_H
#define __MATRICE_H

#include <stddef.h>

struct _matrice {
};

typedef struct _matrice Matrice;

void alloueMatrice(Matrice *M, int n, int m);
void libereMatrice(Matrice *M);

#endif
