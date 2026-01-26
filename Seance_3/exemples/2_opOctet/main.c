#include <stdio.h>
#include <stdint.h>

void cas1()
{
  uint8_t n = 70;
  uint8_t m = 90;
  uint8_t r = n+m;
  printf("\nn = %u m = %u n+m = %u\n", n, m, r);
}

void cas2()
{
  int8_t n = 70;
  int8_t m = 90;
  int8_t r = n+m;
  printf("\nn = %d m = %d n+m = %d\n", n, m, r);
}

void cas3()
{
  uint8_t n = 255u;
  uint8_t m = 1u;
  uint8_t p = 2u*m;
  uint8_t r1 = n + m;
  uint8_t r2 = n + p;

  printf("\nn = %u, m = %u, 2*m = %u\n", n, m, p);
  printf("n+m = %u, n+2*m = %u\n", r1, r2);
}

int main()
{
  cas1();
  cas2();
  cas3();
}