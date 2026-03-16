#include <stddef.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include "timer.h"

int main(int argc, char **argv)
{
  const size_t n = argc > 1 ? atol(argv[1]) : 100000000L;
  double *a, *b, *c, *d;
  size_t i;

  printf("\nn = %lu\n\n", n);

  a = (double *) calloc(n, sizeof(double));
  b = (double *) calloc(n, sizeof(double));
  c = (double *) calloc(n, sizeof(double));
  d = (double *) calloc(n, sizeof(double));

  for (i=0; i<n; i++) {
    a[i] = sin(i*3.1415/(n-1));
    b[i] = cos(i*3.1415/(n-1));
  }

  Timer T1;
  startTimer(&T1);
  for (i=0; i<n; i++) {
    c[i] = a[i]*a[i] + b[i]*b[i];
  }
  for (i=0; i<n; i++) {
    d[i] = a[i]/b[i];
  }
  stopTimer(&T1);
  printf("t : %g s\n", T1.elapsed);

  free(c);
  free(b); 
  free(a);
}