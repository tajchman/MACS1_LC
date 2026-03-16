#ifndef __OPERATIONS_H
#define __OPERATIONS_H

#include <stdbool.h>
#include "vecteur.h"
#include "matrice.h"

double dot(const Vecteur *u, const Vecteur *V);

void Mv(Vecteur *y, const Matrice *M, const Vecteur *x);

void axpy(Vecteur *z, double a, const Vecteur *x, const Vecteur *y);

void axpbMy(Vecteur *z, double a, const Vecteur *x, 
             double b, const Matrice *M, const Vecteur *y);

double uMv(const Vecteur *u, const Matrice *M, const Vecteur*v);

bool gradconj(Vecteur *x, const Matrice *M, const Vecteur *y, 
  double tol, size_t * it);

#endif
