#include <stdio.h>
#include <sys/time.h>
#include <stdlib.h>


int main()
{

  struct timeval T;
  gettimeofday(&T, NULL);

  srand(T.tv_sec);

  char s[1025];
  sprintf(s, "resultat_%ld.txt", T.tv_sec);

  FILE * f = fopen(s, "w");
  for (int i=0; i<10; i++) {
    fprintf(f, "%d\n", rand());
  }
  fclose(f);
  
  return 0;
}
