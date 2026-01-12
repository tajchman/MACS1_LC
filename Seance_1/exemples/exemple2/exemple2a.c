#include <stdio.h>

int main() {
  int c;
  c = getchar(); /* fonction standard */
  while ( c != EOF ) { /* tant qu'il reste du texte a lire */
    putchar(c);
    c = getchar();
  }
}