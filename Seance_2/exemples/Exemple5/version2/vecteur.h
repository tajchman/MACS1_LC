#include <stdlib.h>

#define new_vector(u, T, n) \
    T * u = (T *) malloc(n*sizeof(T))

#define delete_vector(u) \
     free(u); u = NULL
     