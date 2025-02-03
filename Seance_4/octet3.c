#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t n = 255u;
    uint8_t m = 1u;
    uint8_t p = 2u*m;
    uint8_t r1 = n + m;
    uint8_t r2 = n + p;
    printf("n = %u, m = %u, 2*m = %u\n", n, m, p);
    printf("n+m = %u, n+2*m = %u\n", r1, r2);
    return 0;
}