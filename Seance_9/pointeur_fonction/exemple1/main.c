#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double fois2(double x)
{
  return 2.0*x;  
}

int main(int argc, char ** argv)
{
  char *end;
  int k = argc > 1 ? strtol(argv[1], &end, 10) : 1;
  double (*p) (double);

  switch (k)
  {
    case 1:
      p = &sin;
      break;
    case 2:
      p = &cos;
      break;
    case 3:
      p = &fois2;
      break;
  }
  printf("resultat %g\n", p(3.14159));
  return 0;
}