#include <stdio.h>

struct V {
 int n;
 double * v;   
};

struct S {
  char nom[50];
  struct V x; 
};

int main()
{
    printf("sizeof(int)        : %ld\n\n", sizeof(int));
    printf("sizeof(double)     : %ld\n", sizeof(double));
    printf("sizeof(double*)    : %ld\n", sizeof(double*));
    printf("sizeof(double[10]) : %ld\n\n", sizeof(double[10]));

    printf("sizeof(struct V)   : %ld\n", sizeof(struct V));
    printf("sizeof(struct S)   : %ld\n", sizeof(struct S));
    
    return 0;
}