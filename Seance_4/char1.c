#include <stdio.h>
#include <stdint.h>

void dumpByte(uint8_t n, char s[])
{
  int k;
  char * p;
  uint8_t b, m;
  
  s[8] = '\0';

  p = s + 7;
  for (k=0; k<8; k++)
  {
    m = n/2;
    b = n - m*2;
    *p-- = '0' + b;
    n = m;
  }
}

void myprint(char *nom, char c)
{
  char s[9];

  printf("%5s = %c  (caractere)\n", nom, c);
  printf("%5s = %2d (decimal base 10)\n", nom, c);
  printf("%5s = %2X (decimal base 16 - hexadecimal)\n", nom, c);

  dumpByte(c, s);
  printf("%5s = %s\n\n", nom, s);
}

int main()
{
    char c = 'A';
    char d = c + 10;

    myprint("c", c);
    myprint("d", d);
    
    return 0;
}