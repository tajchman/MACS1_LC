#ifndef __VECTEUR_H
#define __VECTEUR_H

#include <stddef.h>

struct _vecteur {
};

typedef struct _vecteur Vecteur;

void alloueVecteur(Vecteur *v, size_t n);
void libereVecteur(Vecteur *v);

#endif
