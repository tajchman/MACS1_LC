#define f1(x) \
    ((x)*(x) + 1)

int f2(int x)
{
    return x*x + 1;
}

#include <stdio.h>

int main()
{
    int i=2;
    int n = f1(++i);

    int j=2;
    int m = f2(j++);

    printf("i = %d n = %d\n", i, n);
    printf("j = %d m = %d\n", j, m);
    return 0;
}