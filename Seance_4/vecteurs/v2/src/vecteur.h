#ifndef __VECTEUR
#define __VECTEUR

struct _vecteur
{
  const char *nom;
  int n;
  double *c;
};
typedef struct _vecteur Vecteur;

Vecteur construitVecteur(int n, const char *s);
void detruitVecteur(Vecteur V);

#endif
