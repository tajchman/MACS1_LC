#ifndef __VECTEUR
#define __VECTEUR

struct _vecteur
{
  const char *nom;
  int n;
  double *c;
};
typedef struct _vecteur Vecteur;

void construitVecteur(Vecteur *V, int n, const char *s);
void detruitVecteur(Vecteur *V);
void copieVecteurs(Vecteur *W, const Vecteur *V);
#endif
