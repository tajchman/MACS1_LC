#ifndef __MATRIX_H
#define __MATRIX_H

#include <stddef.h>

struct sMatrix
{
  size_t n, m;
  double *data;
};
typedef struct sMatrix Matrix;

void allocateMatrix(Matrix * M, size_t n, size_t m);
void freeMatrix(Matrix *M);
void initMatrix(Matrix *M, double (*f)(size_t i, size_t j));
void zeroMatrix(Matrix *M);

#define coeff(M, i, j) M.data[i*M.m + j]

#endif
