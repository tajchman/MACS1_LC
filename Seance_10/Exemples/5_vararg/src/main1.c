#include <stdio.h>
#include <stdarg.h>

double moyenne(size_t n, ...)
{ 
  va_list args;
  va_start(args, n);

  size_t i;
  double m = 0.0;
  for (i=0; i<n; i++)
    m += (double) va_arg(args, double);
    
  va_end(args);
  return m/n;
}

int main()
{
    double m = moyenne(4, 1.2, 3.4, 1.5, 6.2);
    
    printf("moyenne : %f\n", m);

    return 0;
}
