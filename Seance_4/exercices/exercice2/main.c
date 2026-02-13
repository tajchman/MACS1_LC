#include <stdio.h>

int f(int k)
{
    k = 12;
}

int main()
{
    int n = 3;
 
    f(n);
    printf("\nn = %d\n\n", n);
    return 0;
}