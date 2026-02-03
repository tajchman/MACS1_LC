#include <stdio.h>

union _nombre
{
  int n;
  float f;
  double d;
  const char *s;
};
typedef union _nombre nombre;

void affiche(nombre x)
{
  printf("%d", x.n); // ??? 
  printf("%f", x.f); // ???
  printf("%g", x.d); // ???
}

int main()
{
  nombre v;
  v.n = 1; 
  printf("v.n = %d\n", v.n);

  v.f = 0.5;
  printf("v.f = %g v.n = %d\n", v.f, v.n);

  v.s = "soixante-dix";
  printf("v.s = %s v.f = %g\n", v.s, v.f);
  return 0;

  struct nombre
{
    unsigned entier : 1;
    unsigned flottant : 1;
    union
    {
        int e;
        double f;
    } u;
};


void affiche_nombre(struct nombre n)
{
    if (n.entier)
        printf("%d\n", n.u.e);
    else if (n.flottant)
        printf("%f\n", n.u.f);
}


int main(void)
{
    struct nombre a = { 0 };
    struct nombre b = { 0 };

    a.entier = 1;
    a.u.e = 10;
    b.flottant = 1;
    b.u.f = 10.56;

    affiche_nombre(a);
    affiche_nombre(b);
    return 0;
}
}