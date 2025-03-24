#include <stdio.h>
#include <stdlib.h>
#include "fibonacci.h"

long *reserve;
int nreserve;

void init_dynamique(int n)
{
  reserve = (long *) malloc(sizeof(long) * n);
  nreserve = n;
  for (int i=0; i<nreserve; i++)
    reserve[i] =-1;
}

void end_dynamique()
{
  free(reserve);
  nreserve = 0;
}

long fibonacci_dynamique(int n) {
  if (n < nreserve && reserve[n] > 0) return reserve[n];

  long r;
  if (n < 2) r = n;
  else r =  fibonacci_dynamique(n-1) 
          + fibonacci_dynamique(n-2); 
  reserve[n] = r;
  return r; 
}
