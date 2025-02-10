#include <stdio.h>

int main()
{
  int i;
  double v[6];
  for (i=0; i<6; i++) v[i] = 0;

  v[3] = 1.5;
  *(v + 4) = 1.6;
  *(double *) (((char *) v) + 5*sizeof(double)) = 1.7;
  *(double *) (((char *) v) + 1*sizeof(short)) = 1.2;

  for (i=0; i<6; i++) printf("v[%d] = %4.1f\n", i, v[i]);

  return 0;
}