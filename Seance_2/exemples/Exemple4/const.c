#include <stdio.h>

int main()
{
  const int k = 3*(4+1);

  printf("k = %d\n", k);

  k = 2*k;
  printf("k = %d\n", k);

  return 0;
}