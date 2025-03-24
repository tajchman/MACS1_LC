#include <stdio.h>
#include "fibonacci.h"

long fibonacci_recursif(int n) {
  if (n < 2) return (long) n;
  return fibonacci_recursif(n-1) 
          + fibonacci_recursif(n-2);  
}
