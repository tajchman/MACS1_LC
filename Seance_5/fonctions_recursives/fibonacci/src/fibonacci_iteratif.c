#include <stdio.h>
#include "fibonacci.h"

long fibonacci_iteratif(int n) {
  long f0 = 0;
  long f1 = 1;
  long f;

  int k;
  for (k=2; k<=n; k++)
  {
    f = f0 + f1;
    f0 = f1;
    f1 = f;
  }
  return f1;
}
