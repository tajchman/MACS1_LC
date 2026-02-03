#ifndef __VECTEUR
#define __VECTEUR

struct _vecteur
{
  const char *name;
  int n;
  double *c;
};
typedef struct _vecteur Vecteur;

void construitVecteur(Vecteur *v, int n, const char *name);
void detruitVecteur(Vecteur *V);
void copieVecteur(Vecteur *W, const Vecteur *V);
void afficheVecteur(const Vecteur *V);

#endif
