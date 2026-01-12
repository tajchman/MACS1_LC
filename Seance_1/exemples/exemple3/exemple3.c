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
    struct S x;

    printf("sizeof(int)        : %ld\n", sizeof(int));
    printf("sizeof(double)     : %ld\n", sizeof(double));
    printf("sizeof(double[10]) : %ld\n\n", sizeof(double[10]));

    printf("sizeof(int)          : %ld\n", sizeof(int));
    printf("sizeof(double*)      : %ld\n", sizeof(double*));
    printf("sizeof(struct V)   : %ld\n\n", sizeof(struct V));
    
    printf("  sizeof(char[50])   : %ld\n", sizeof(char[50]));
    printf("  sizeof(struct V)   : %ld\n\n", sizeof(struct V));
    printf("sizeof(struct S)   : %ld\n", sizeof(struct S));
    printf("sizeof(x)          : %ld\n", sizeof(x));
    
    return 0;
}
