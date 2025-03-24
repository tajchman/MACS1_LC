#include <stdio.h>
#include "alglin.h"

double init(int i)
{
	return 2.0*i;
}

int main()
{
  Matrice A;
	Vecteur X, Y;

	lectureMatrice(&A, "data/matrice1.data");
	afficheMatrice(&A);

	alloueVecteur(&X, "X", A.m);
	alloueVecteur(&Y, "Y", A.n);

	setVecteur(&X, init);

	afficheVecteur(&X);
	prodMatVec(&Y, &A, &X);
	afficheVecteur(&Y);

	libereVecteur(&X);
	libereVecteur(&Y);
	libereMatrice(&A);
	
	return 0;
}

