#ifndef __VECTEUR_H
#define __VECTEUR_H

#include <stddef.h>
#include <stdio.h>

struct _vecteur {
};

typedef struct _vecteur Vecteur;

void alloueVecteur(Vecteur *v, size_t n);
void libereVecteur(Vecteur *v);

void lectureVecteur(Vecteur *v, FILE * f);
void ecritureVecteur(Vecteur *v, FILE * f);

#endif
