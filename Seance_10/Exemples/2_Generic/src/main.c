#include <stdio.h>
#include <math.h>

int sqrt_int(int n)
{ 
  if (n <= 0) return 0;
  
  int n1 = 1, n2 = n;
  
  while (n1 != n2)
  {
    n1 = n2;
    n2 = (n1 + n/n2)/2;
  }

  return n1;
}

long sqrt_long(long n)
{ 
  if (n <= 0) return 0;
  
  long n1 = 1, n2 = n;
  
  while (n1 != n2)
  {
    n1 = n2;
    n2 = (n1 + n/n2)/2;
  }

  return n1;
}

#define SQRT(x)  _Generic( (x),   \
    float    : sqrtf(x),     \
    double   : sqrt(x),      \
    int      : sqrt_int(x),  \
    long     : (long) sqrt((double) x)  \
  )

int main()
{
    double a = 150.0;
    int i = 50000;
    float f = 300.0f;
    long l = 1000000L;

    printf("sqrt(%5.1f) = %5.1f\n", a, SQRT(a));
    printf("sqrt(%5.1f) = %5.1f\n", f, SQRT(f));
    printf("sqrt(%d) = %d\n", i, SQRT(i));
    printf("sqrt(%ld) = %ld\n", l, SQRT(l));

    return 0;
}
