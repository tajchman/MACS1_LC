#include <stdio.h>
#include "vecteur.h"
#include "matrice.h"

int main()
{
	size_t n = 1000;

	Vecteur x, y;
  Matrice A;

	alloueVecteur(&x, n);
	alloueVecteur(&y, n);
	alloueMatrice(&A, n, n);
	
	libereVecteur(&x);
	libereVecteur(&y);
	libereMatrice(&A);
	
	return 0;
}

