#include <stdio.h>
#include <stdlib.h>

#define eprintf(format, ...)  {        \
   fprintf(stderr, "%s:%d:\n\t"format,     \
      __FILE__, __LINE__, __VA_ARGS__); \
   exit(-1);                            \
}


int main()
{
    int n = 4;

    n -= 5;
    if (n < 0)
        eprintf("erreur n<0 (n = %d)\n", n);
    eprintf("%s", "c'est fini");

    return 0;
}