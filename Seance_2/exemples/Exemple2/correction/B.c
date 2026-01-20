#include <stdio.h>

extern double x;

void B()
{
  printf("dans B, x = %lg\n", x);
}