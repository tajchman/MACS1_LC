#include "matmul.h"

void matMul(const Matrix* A,
            const Matrix* B,
            Matrix* C)
{
  size_t M = A->n;
  size_t K = A->m;
  size_t N = B->m;

  for (size_t k=0; k<K; k++)
    for (size_t i=0; i<M; i++) {
      double Aik = coeff((*A), i,k);
      for (size_t j=0; j<N; j+=4) {
        double* Cij= (*C).data + i*(*C).m + j;
        double* Bkj= (*B).data + k*(*B).m + j;
        Cij[0] += Aik * Bkj[0];
        Cij[1] += Aik * Bkj[1];
        Cij[2] += Aik * Bkj[2];
        Cij[3] += Aik * Bkj[3];
      }
    }
}