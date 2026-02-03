#ifndef __VECTEUR
#define __VECTEUR

struct _vecteur
{
  const char *name;
  int n;
  int n_max;
  double *c;
};
typedef struct _vecteur Vecteur;

void construitVecteur(Vecteur *v, int n, const char *name);
void detruitVecteur(Vecteur *V);
void copieVecteur(Vecteur *W, const Vecteur *V);
void afficheVecteur(const Vecteur *V);

void insereVecteur(Vecteur *V, int k, double v);
void supprimeVecteur(Vecteur *V, int k);

#endif
