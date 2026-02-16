#include <stdio.h>

void initialise_ints(int *k, int n)
{
  for (int i=0; i<n; i++)
    k[i] = i;
}

void initialise_doubles(double *v, int n, double x)
{
  v[0] = 1.0;
  for (int i=0; i<n; i++)
    v[i+1] = v[i] * x;
}

void affiche_doubles(const char *nom, double *v, int n)
{
  for (int i=0; i<n; i++)
    printf("%s(%d) = %g\n", nom, i, v[i]);
  printf("\n");
}

void affiche_ints(const char *nom, int *v, int n)
{
  for (int i=0; i<n; i++)
    printf("%s(%d) = %d\n", nom, i, v[i]);
  printf("\n");
}

int main()
{
  double v[4];
  double b[4];
  int n[8];

  printf("&v = %p\n", v);
  printf("&b = %p v%+ld\n", b, b - v);
  printf("&n = %p b%+ld\n", n, (double *)n - b);
  printf("\n");

  initialise_ints(n, 8);
  affiche_ints("n", n, 8);

  initialise_doubles(b, 4, 3.0);
  affiche_doubles("b", b, 4);

  initialise_doubles(v, 4, 4.0);

  affiche_doubles("v", v, 4);
  affiche_doubles("b", b, 4);
  affiche_ints("n", n, 8);

  return 0;
}