#include <stdio.h>

#define TYPE_NAME(X) _Generic((X), \
    int: "entier", \
    char: "lettre", \
    double: "double", \
    default: "inconnu")

 int main() {
    double x = 42.3;
    char s = 'A';
   
    printf("Valeur %g Type : %s\n", x, TYPE_NAME(x)); 
    printf("Valeur %c Type: %s\n", s, TYPE_NAME(s));   
    return 0;
 } 
