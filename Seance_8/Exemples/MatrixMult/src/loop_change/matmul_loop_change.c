#include "matmul.h"

void matMul(const Matrix* A,
            const Matrix* B,
            Matrix* C)
{
  auto M = A->n;
  auto K = A->m;
  auto N = B->m;

  for (size_t k=0; k<K; k++)
    for (size_t i=0; i<M; i++)
      for (size_t j=0; j<N; j++)
        coeff((*C), i,j) += coeff((*A), i,k) * coeff((*B), k, j);
}