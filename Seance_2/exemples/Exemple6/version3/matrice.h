#include <stdlib.h>

#define new_matrix(A, T, n, m)            \
    T ** A = (T **) malloc(n*sizeof(T*)); \
    if (A == NULL) { printf("erreur alloue matrice"); exit(-1); } \
    A[0] = (T*) malloc(n*m*sizeof(T));    \
    if (A[0] == NULL) {                   \
        free(A);  \
        printf("erreur alloue matrice"); exit(-1); \
    }\
    for (int k=1; k<n; k++)               \
        A[k] = A[k-1] + m;

#define delete_matrix(A) \
    free(A[0]); \
     free(A); A = NULL

