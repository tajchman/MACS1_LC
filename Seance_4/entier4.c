#include <stdio.h>
#include <stdint.h>

int main()
{
    int16_t x, y;

    x =   8; y =  4; printf("x = %4d y = %4d x/y = %4d\n", x, y, x/y);
    x =  10; y =  4; printf("x = %4d y = %4d x/y = %4d\n", x, y, x/y);
    x =  10; y = -4; printf("x = %4d y = %4d x/y = %4d\n", x, y, x/y);
    x =   2; y =  3; printf("x = %4d y = %4d x/y = %4d\n", x, y, x/y);
    x =  -5; y = -2; printf("x = %4d y = %4d x/y = %4d\n", x, y, x/y);
    x =  -6; y = -2; printf("x = %4d y = %4d x/y = %4d\n", x, y, x/y);

    return 0;
}
