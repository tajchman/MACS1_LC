#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int n = argc > 1 ? atoi(argv[1]) : 5;
  int *v;

  printf("avant v[0] = %d\n\n", v[0]);

  v = malloc(n);

  for (int i=0; i<n; i++)
    printf(" %d", v[i]);
  printf("\n\n");

  for (int i=0; i<n; i++)
    v[i] = i*i;

  for (int i=0; i<n; i++)
    printf(" %d", v[i]);
  printf("\n\n");

  free(v);

  printf("\naprès v[0] = %d\n", v[0]);
  
  
  return 0;
}