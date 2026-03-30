#include <stdio.h>
#include <stdarg.h>

double moyenne(double x0, ...)
{ 
  va_list args;
  va_start(args, x0);

  size_t n = 0;
  double x = x0, m = 0.0;

  while (x > -9998) {
    m += x;
    n++;
    x = (double) va_arg(args, double);
  }
  
  va_end(args);
  return m/n;
}

int main()
{
    double m = moyenne(1.2, 3.4, 1.5, 6.2, -9999);
    
    printf("moyenne : %f\n", m);

    return 0;
}
