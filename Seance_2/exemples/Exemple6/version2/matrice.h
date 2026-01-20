#include <stdlib.h>

#define new_matrix(A, T, n, m) \
    T * A = (T *) malloc(n*m*sizeof(T)); \
    if (A == NULL) { printf("erreur alloue matrice"); exit(-1); }

#define delete_matrix(A) \
     free(A); A = NULL

#define coeff_matrix(A, i, j, n) \
      A[i + j*n]
