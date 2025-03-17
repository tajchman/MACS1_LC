#include <stdio.h>

int count = 0;
 
void g(void) {
  printf("Called g, count = %d.\n", count);
}
 
typedef void (*exec_func)(void);

static inline void exec_bump(exec_func f) {
  f();
  ++count;
}
 
void aFunc(void) {
  int count = 0;
  while (count++ < 10) {
    exec_bump(g);
  }
}

int main()
{
  aFunc();
  return 0;
}
