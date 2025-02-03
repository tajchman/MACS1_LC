#include <stdio.h>
#include <stdint.h>

int main()
{
    int16_t a, b, c;

    a = 200;
    b = -300;
    c = a*b;
    printf("a = %d b = %d a*b = %d\n", a, b, c);

    return 0;
}