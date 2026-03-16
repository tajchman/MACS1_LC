#include "operations.h"
#include <assert.h>

void Mv(Vecteur *y, const Matrice *M, const Vecteur *x)
{
  size_t i, j, n = M->n, m = M->m;

  assert(M->n == y->n);
  assert(M->m == x->n);

  for (i=0; i<n; i++) {
    double s = 0.0;
    for (j=0; j<m; j++)
        s += M->c[i*m+j]*x->c[j];
    y->c[i] = s;
  }
}

double uMv(const Vecteur *u, const Matrice *M, const Vecteur *v)
{
  size_t i, j, n = M->n, m = M->m;

  assert(M->n == u->n);
  assert(M->m == v->n);

  double t = 0.0;
  for (i=0; i<n; i++) {
    double s = 0.0;
    for (j=0; j<m; j++)
        s += M->c[i*m+j]*v->c[j];
     t += u->c[i] * s;
  }
  return t;
}


void axpby(Vecteur *z, double a, const Vecteur *x, double b, const Vecteur *y)
{
  size_t i, n = z->n;

  assert(z->n == x->n && z->n == y->n);
  
  for (i=0; i<n; i++)
    z->c[i] = a * x->c[i] + b * y->c[i];

}

void axpbMy(Vecteur *z, double a, const Vecteur *x, 
             double b, const Matrice *M, const Vecteur *y)
{
  size_t i, j, n = M->n, m = M->m;

  assert(z->n == n && x->n == n && y->n == m);

  for (i=0; i<n; i++) {
    double s = 0.0;
    for (j=0; j<m; j++)
        s += M->c[i*m+j]*y->c[j];
    z->c[i] = a * x->c[i] + b * s;
  }
}

double dot(const Vecteur *u, const Vecteur *v)
{
  double r = 0.0;
  size_t i, n = u->n;
  assert(v->n == n);

  for (i=0; i<n; i++)
    r += u->c[i] * v->c[i];
  return r;
}

bool gradconj(Vecteur *x, const Matrice *M, const Vecteur *b, double tol, size_t *it)
{
  double rr0 = -1.0, rr, rrp;
  size_t k, n = M->n, m = M->m;
  assert(m == n && x->n == m && b->n == m);

  Vecteur _r, _p, _Ap;
  Vecteur * r = &_r, * p = &_p, * Ap = &_Ap;
  creeVecteur(r, n, "r", NULL);
  creeVecteur(p, n, "p", NULL);
  creeVecteur(Ap, n, "p", NULL);

  axpbMy(r, 1.0, b, -1.0, M, x);
  rr0 = rr = dot(r, r);
  
  copieVecteur(p, r);

  fprintf(stderr, "\n");
  for(k=0; k<n; k++) {
    double alpha, beta;

    if (rr <= tol*rr0) {
      fprintf(stderr, "\riteration %lu residu = %g     \r", k, rr);
      break;
    }

    Mv(Ap, M, p);

    alpha = rr/dot(p, Ap);

    axpby(x, 1.0, x, alpha, p);
    axpby(r, 1.0, r, -alpha, Ap);
    rrp = dot(r,r);

    beta = rrp/rr;
    axpby(p, 1.0, r, beta, p);
    rr = rrp;
    fprintf(stderr, "\riteration %lu residu = %g     \r", k, rr);
  }
  *it = k+1;
  fprintf(stderr, "\n");

  detruitVecteur(r);
  detruitVecteur(p);
  detruitVecteur(Ap);

  return rr < tol*rr0;
}