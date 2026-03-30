#include <stdio.h>
#include <math.h>

void f()
{
    double r, x = 0.3;
    r = sqrtf(x);
    printf("f: x = %25.18g r = %25.18g\n", x, r);
}

void g()
{
    double r, x = 0.3;
    r = sqrt(x);
    printf("g: x = %25.18g r = %25.18g\n", x, r);
}

int main()
{
    f();
    g();
    return 0;
}