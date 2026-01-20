#include <stdio.h>

#define Mul(x,y) x*y

int main()
{
  int k = Mul(3, 4+1);
  printf("k = %d\n", k);
  return 0;
}