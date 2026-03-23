#include "matmul.h"
#include <pthread.h>

struct Data {
  size_t imin, imax, jmin, jmax, kmin, kmax;
  const Matrix *A;
  const Matrix *B;
  Matrix *C;
};

void * compute(void *data)
{
  struct Data * d = (struct Data *) data;

  for (size_t i=d->imin; i<d->imax; i++)
    for (size_t j=d->jmin; j<d->jmax; j++)
      for (size_t k=d->kmin; k<d->kmax; k++)
        coeff((*(d->C)),i,j) += coeff((*(d->A)), i,k) * coeff((*(d->B)), k, j);

  pthread_exit(NULL);
}

void matMul(const Matrix* A,
            const Matrix* B,
            Matrix* C)
{
  struct Data data1, data2, data3, data4;

  data1.A = A;         data2.A = A;         data3.A = A;         data4.A = A;
  data1.B = B;         data2.B = B;         data3.B = B;         data4.B = B;
  data1.C = C;         data2.C = C;         data3.C = C;         data4.C = C;

  data1.imin = 0;      data2.imin = A->n/2; data3.imin = 0;      data4.imin = A->n/2;
  data1.imax = A->n/2; data2.imax = A->n;   data3.imax = A->n/2; data4.imax = A->n;

  data1.jmin = 0;      data2.jmin = 0;      data3.jmin = B->m/2; data4.jmin = B->m/2;
  data1.jmax = B->m/2; data2.jmax = B->m/2; data3.jmax = B->m;   data4.jmax = B->m;

  data1.kmin = 0;      data2.kmin = 0;      data3.kmin = 0;      data4.kmin = 0;
  data1.kmax = A->m;   data2.kmax = A->m;   data3.kmax = A->m;   data4.kmax = A->m;

  pthread_t t1, t2, t3, t4;
  pthread_create(&t1, NULL, compute, (void *) &data1);
  pthread_create(&t2, NULL, compute, (void *) &data2);
  pthread_create(&t3, NULL, compute, (void *) &data3);
  pthread_create(&t4, NULL, compute, (void *) &data4);
 
  pthread_join(t1, NULL);
  pthread_join(t2, NULL); 
  pthread_join(t3, NULL);
  pthread_join(t4, NULL); 
}