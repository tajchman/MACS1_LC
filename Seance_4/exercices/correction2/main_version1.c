#include <stdio.h>

int f(int *k)
{
    *k = 12;
}

int main()
{
    int n;
 
    int *pn = &n;
    f(pn);
    printf("\nn = %d\n\n", n);
    return 0;
}