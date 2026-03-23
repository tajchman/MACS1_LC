#include "matmul.h"

static size_t BLOCK;

void setBlock(size_t b) {
  BLOCK = b;
}

void block(const double *a, const double *b, double *c, 
           size_t N, size_t K)
{
  for(size_t i=0; i<BLOCK; i++, c+=N, a+=K)
  {
    const double *bb = b;
    for (size_t k=0; k<BLOCK; k++, bb += N)
      for (size_t j=0; j<BLOCK; j++)
        c[j] += a[k] * bb[j];
  }
}

void matMul(const Matrix* A,
            const Matrix* B,
            Matrix* C)
{
  size_t M = A->n;
  size_t K = A->m;
  size_t N = B->m;

  #pragma omp parallel for
  for (size_t ib=0; ib<M; ib += BLOCK)
    for (size_t kb=0; kb<K; kb += BLOCK)
      for (size_t jb=0; jb<N; jb += BLOCK) {
        const double *a = &(A->data[ib*A->m + kb]);
        const double *b = &(B->data[kb*B->m + jb]);
        double *c = &(C->data[ib*C->m + jb]);
        block (a, b, c, N, K);
      }
}