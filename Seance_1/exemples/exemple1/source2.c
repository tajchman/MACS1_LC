#include <string.h>
#include <stdlib.h>

struct V {
 int n;
 double * v;   
};

struct S {
  char nom[10];
  struct V x; 
};

int main()
{
    struct S z;

    strcpy(z.nom, "exemple");
    z.x.n = 5;
    z.x.v = (double *) malloc(z.x.n *sizeof(double));
    z.x.v[2] = 3.2;

    return 0;
}