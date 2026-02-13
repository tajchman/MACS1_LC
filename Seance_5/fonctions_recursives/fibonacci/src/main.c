#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <sys/time.h>
#include "fibonacci.h"

typedef enum _method
{
  Recursif,
  Iteratif,
  Dynamique
} Method;

int checkArgs(int argc, char **argv, Method * method, int * n)
{
  char *end;
  *n = argc > 1 
              ? strtod(argv[1], &end)
              : 20;
  *method = Recursif;
  if (argc > 2)
    if (strncasecmp(argv[2], "recursif", sizeof("recursif)")) == 0)
      *method = Recursif;
    else if (strncasecmp(argv[2], "iteratif", sizeof("iteratif)")) == 0)
      *method = Iteratif;
    else if (strncasecmp(argv[2], "dynamique", sizeof("dynamique)")) == 0)
      *method = Dynamique;
}

int main(int argc, char **argv) {
  long r;
  char * end;
  int kmax;
  Method method;
  checkArgs(argc, argv, &method, &kmax);

  double dt;
  struct timeval tStart, tEnd;

  init_dynamique(kmax);
  for (int k = 0; k<kmax; k++) {
    gettimeofday(&tStart, NULL);
 
    switch (method)
    {
      case Recursif:
        r = fibonacci_recursif(k);
        break;
      case Iteratif:
        r = fibonacci_iteratif(k);
        break;
      case Dynamique:
        r = fibonacci_dynamique(k);
        break;
    }
    gettimeofday(&tEnd, NULL);
    dt = (tEnd.tv_sec - tStart.tv_sec) 
         + 1e-6 * (tEnd.tv_usec - tStart.tv_usec);
    printf("f(%3d) = %12ld (CPU time : %12.6f s)\n", 
      k, r, dt);
  }
  end_dynamique(kmax);

  return 0;
} 
