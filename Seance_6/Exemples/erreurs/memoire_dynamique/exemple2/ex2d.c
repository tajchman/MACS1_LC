#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[]) {
    int n = 12;
    char *s = malloc(n);
    strcpy(s, "Hello world!");
    printf("string is: %s\n", s);
    free(s);
    return 0;
}
