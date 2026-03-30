#include <stdio.h>

#define float int

int main()
{
    float a, b;
    a = 3.0;
    b = 1.2;

    double c = (double) a*b;
    printf("c = %g\n", c);
    return 0;
}