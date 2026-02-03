#include <stdio.h>

int main()
{
  int x;
  int *p;

  p = &x;
 
  x = 10;
  *p = 10;

  printf("x (direct)   = %d\n", x);
  printf("x (indirect) = %d\n", *p);

  *p = 12;
  printf("x (modifie)  = %d\n", x);

  double y = 3.2;
  printf("y = %g\n", y);

  p = & y;
  *p = 6.4;
  printf("y = %g\n", y);

  void * q;
  q = &x;
  q = &y;
  
  return 0;
}
