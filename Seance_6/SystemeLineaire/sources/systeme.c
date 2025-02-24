#include <stdio.h>
#include "vecteur.h"
#include "matrice.h"

int main()
{
  Matrice A;

	FILE * fData 
	   = fopen("install/data/matrice1.data", "r");
	lectureMatrice(&A, fData);
	fclose(fData);
	
	libereMatrice(&A);
	
	return 0;
}

