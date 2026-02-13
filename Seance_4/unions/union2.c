#include <stdio.h>

#define Entier 1
#define Float  2
#define Double 3
#define Chaine 4

struct _nombre
{
  int type;
  union {
    int n;
    float f;
    double d;
    const char *s;
  };
};
typedef struct _nombre nombre;


void affiche(nombre x)
{
  if (x.type == Entier)
    printf("%d", x.n);
  else if (x.type == Float)
    printf("%f", x.f);
  else if (x.type == Double)
    printf("%g", x.d);
  else if (x.type == Chaine)
    printf("%s", x.s);
  printf("\n");
}

int main()
{
  nombre v;
  v.type = Entier; v.n = 1;
  affiche(v);

  v.type = Float; v.f = 0.5;
  affiche(v);

  v.type = Chaine; v.s = "soixante-dix";
  affiche(v);
  return 0;

};
