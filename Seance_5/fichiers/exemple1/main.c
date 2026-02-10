#include <stdio.h>

int main()
{
  FILE *f = fopen("test", "r");
  FILE *g = fopen("output", "w");
  FILE *h = fopen("resultats", "a");

  int k;
  char s[1025];
  fscanf(f, "%d", &k);
  fgets(s, 1024, f);

  fprintf(g, "k = %5d (%s)\n", k, s);

  fprintf(h, "k = %5d (%s)\n", k, s);

  fclose(f);
  fclose(g);
  fclose(h);

  return 0;
}