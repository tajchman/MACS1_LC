#include <stdio.h>

struct vecteur {
  int n; 
  double *c;
} vc;

struct matrice {
  int n , m;
  double *c;
} u, v, w;

union _nombre
{
  int n;
  float f;
  double d;
  char s[20];
};
typedef union _nombre nombre;


int main()
{
/*  int i,j,k;
  int N, M, P;

  double vmin;
  if (vc.n > 0) {
    vmin = vc.c[0];
    for (int i=1; i<vc.n; i++)
      if (vc.c[i] < vmin) vmin = vc.c[i];
  }

  for (i=0; i<N; i++)
    for (j=0; j<P; j++) {
      double s = 0.0;
      for (k=0; k<M; k++)
        s += u.c[i*M + k] * v.c[k*P + j];
      w.c[i*P + j] = s;
    }
*/
  nombre v;
  v.n = 1;
  v.f = 0.5;
  printf("v.n = %d\n", v.n);
  v.s = "soixante-dix";
  return 0;
}