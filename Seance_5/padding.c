#include <stdio.h>
#include <stddef.h>

struct S1
{
  char c1;
  int n;
  char c2;
  double X;
};

struct S2
{
  double X;
  int n;
  char c1;
  char c2;
};

int main()
{
  struct S1 x[10];
  struct S2 y[10];

  size_t p0, pX, pn, pc1, pc2;
  size_t q0, qX, qn, qc1, qc2;

  printf("sizeof(S1) : %zu octets\n", sizeof(struct S1));
  printf("sizeof(S2) : %zu octets\n", sizeof(struct S2));
  printf("sizeof(x) : %zu octets\n", sizeof(x));
  printf("sizeof(y) : %zu octets\n\n", sizeof(y));

  p0 = (size_t) x;
  printf("addresse x       : %zu\n", p0);
  pc1 = (size_t) &(x[0].c1);
  printf("addresse x[0].c1 : %zu ( = addresse x + %zu)\n", pc1, pc1 - p0);
  pn = (size_t) &(x[0].n);
  printf("addresse x[0].n  : %zu ( = addresse x + %zu)\n", pn, pn - p0);
  pc2 = (size_t) &(x[0].c2);
  printf("addresse x[0].c2 : %zu ( = addresse x + %zu)\n", pc2, pc2 - p0);
  pX = (size_t) &(x[0].X);
  printf("addresse x[0].X  : %zu ( = addresse x + %zu)\n\n", pX, pX - p0);

  q0 = (size_t) y;
  printf("addresse y       : %zu\n", q0);
  qX = (size_t) &(y[0].X);
  printf("addresse y[0].X  : %zu ( = addresse y + %zu)\n", qX, qX - q0);
  qn = (size_t) &(y[0].n);
  printf("addresse y[0].n  : %zu ( = addresse y + %zu)\n", qn, qn - q0);
  qc1 = (size_t) &(y[0].c1);
  printf("addresse y[0].c1 : %zu ( = addresse y + %zu)\n", qc1, qc1 - q0);
  qc2 = (size_t) &(y[0].c2);
  printf("addresse y[0].c2 : %zu ( = addresse y + %zu)\n\n", qc2, qc2 - q0);

  return 0;
}