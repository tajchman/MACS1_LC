#include <stdio.h>
#include "vecteur.h"

void initialise(vecteur *v, double x)
{
  v->c[0] = 1.0;
  for (int i=0; i<v->n; i++)
    v->c[i+1] = v->c[i] * x;
}

void affiche(vecteur *v)
{
  for (int i=0; i<v->n; i++)
    printf("%s(%d) = %g\n", v->nom, i, v->c[i]);
}

int main()
{
  vecteur a, b, c;
  cree(&a, 4, "a");
  cree(&b, 2, "b");
  cree(&c, 2, "b");

  printf("&a = %p %lu\n", a.c, a.c);
  printf("&b = %p %lu (%lu)\n", b.c, b.c, ((void *) b.c) - ((void *) a.c));
  printf("&c = %p %lu (%lu)\n", c.c, c.c, ((void *) c.c) - ((void *) a.c));

  initialise(&a, 2.0);
  affiche(&a);

  initialise(&b, 3.0);
  affiche(&b);

  initialise(&c, 4.0);
  affiche(&c);

  affiche(&b);

  return 0;
}