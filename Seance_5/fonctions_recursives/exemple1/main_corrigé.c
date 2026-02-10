#include <stdio.h>

int f(int n) {
  int k;
  if (n > 0) k = f(n-1) * 2;
  else       k = 1;
  return k;  
}

int main() {
  int r = f(5);
  printf("r = %d\n", r);
  return 0;
} 
