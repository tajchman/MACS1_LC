#include <stdio.h>
#include <time.h>
#include <stdlib.h>

   // Initialization, should only be called once.
 
int main()
{
  float v[3];
  char s[3];
  int i, j, k;

  srand(time(NULL));
  for (i = 0; i<3; i++) {
    s[i] = 'a' + i;
    v[i] = ((float) rand())/RAND_MAX;
  }

  printf("\na = %f b = %f c = %f\n\n", v[0], v[1], v[2]);

  for (i=0; i<3; i++)
    for (j=0; j<3; j++) {
      if (i==j) continue;
      k = 3 - i - j;
      printf("(%c + %c) + %c = %14.8f", 
             s[i], s[j], s[k], (v[i] + v[j]) + v[k]);
      printf("   %c + (%c + %c) = %14.8f", 
             s[i], s[j], s[k], v[i] + (v[j] + v[k]));
      printf("\n");
    }
  printf("\n");
  return 0;
}