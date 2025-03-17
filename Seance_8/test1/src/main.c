#include <stdio.h>

int count = 0;
 
#define EXEC_BUMP(func) (func(), ++count)
 
void g(void) {
  printf("Called g, count = %d.\n", count);
}
 
void aFunc(void) {
  int count = 0;
  while (count++ < 10) {
    EXEC_BUMP(g);
  }
}

int main()
{
  aFunc();
  return 0;
}
