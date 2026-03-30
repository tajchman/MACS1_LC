#include "matmul.h"

void matMul(const Matrix* A,
            const Matrix* B,
            Matrix* C)
{
  size_t M = A->n;
  size_t K = A->m;
  size_t N = B->m;

  for (size_t i=0; i<M; i++)
    for (size_t j=0; j<N; j++)
      for (size_t k=0; k<K; k++)
        coeff((*C),i,j) += coeff((*A), i,k) * coeff((*B), k, j);
}