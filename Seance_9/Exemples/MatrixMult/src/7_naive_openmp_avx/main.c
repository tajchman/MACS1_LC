#include "matmul.h"
#include "timer.h"
#include "version.h"
#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

double initM(size_t i, size_t j)
{
  return 0.002*i*j;
}

int main(int argc, char **argv)
{
  Matrix A, B, C;
  Timer TGlobal, T0, T1;
  initTimer(&TGlobal, "global");
  initTimer(&T0, "init");

  startTimer(&TGlobal);
  size_t n = argc > 1 ? atol(argv[1]) : 1024L;
  size_t m = 2*n;
  size_t p = 3*n;

  startTimer(&T0);
    
  allocateMatrix(&A, n, m),
  allocateMatrix(&B, m, p),
  allocateMatrix(&C, n, p),
    
  initMatrix(&A, initM);
  initMatrix(&B, initM);
  zeroMatrix(&C);

  stopTimer(&T0);
  printf("\n%s\n\t%7s : %7.3f s\n",
         version, T0.name, T0.elapsed);
  cleanTimer(&T0);

  initTimer(&T1, "calcul");
  startTimer(&T1);

  matMul(&A, &B, &C);
  
  stopTimer(&T1);
  printf("\t%7s : %7.3f s  C(%lu, %lu) = %g\n",
         T1.name, T1.elapsed, n/2, p/2, coeff(C, n/2, p/2));
  cleanTimer(&T1);

  stopTimer(&TGlobal);
  printf("\t%7s : %7.3f s\n", TGlobal.name, TGlobal.elapsed);
  cleanTimer(&TGlobal);

  freeMatrix(&C);
  freeMatrix(&B);
  freeMatrix(&A);
        
  return 0;
}
