#include <stdio.h>
#include "string.h"

int m;
int f(int n);

int main()
{
  m = 5;
  int n = 10;
  printf("main: f(%d) = %d\n", n, f(n));
  return 0;
}

