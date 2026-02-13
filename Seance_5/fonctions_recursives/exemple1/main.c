#include <stdio.h>

int f(int n) {
  int k = f(n-1) * 2;
  return k;  
}

int main() {
  int r = f(5);
  printf("r = %d\n", r);
  return 0;
} 
