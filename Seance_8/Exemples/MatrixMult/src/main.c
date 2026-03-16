#include "matmul.h"
#include "timer.h"
#include "version.h"
#include <stdio.h>
#include <stdlib.h>

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
  initTimer(&T1, "start");

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

  startTimer(&T1);
  matMul(&A, &B, &C);
  stopTimer(&T1);

  stopTimer(&TGlobal);

  printf("C(%lu, %lu) = %g\n\n", n/2, p/2, coeff(C, n/2, p/2));
  printf("\n%s\n"
    "\tglobal : %7.3f\n"
    "\tinit   : %7.3f\n"
    "\tmatmul : %7.3f\n\n",
         version, TGlobal.elapsed, T0.elapsed, T1.elapsed);
        
  return 0;
}