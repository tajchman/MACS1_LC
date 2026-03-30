#ifdef _MSC_VER
    #define _CRT_SECURE_NO_WARNINGS 1
#endif

#include <math.h>
#include <stdio.h>
#include <string.h>
#include "my_getline.h"

#define FUNCTION(NAME) calcul_ ## NAME

#define COMMAND(NAME)  { #NAME, FUNCTION(NAME) }

struct command
{
  char *name;
  double (*function) (double);
};

double FUNCTION(sin)(double x)
{ 
    return sin(x);
}

double FUNCTION(cos)(double x)
{
    return cos(x);
}

struct command commands[] =
{
  COMMAND (sin),
  COMMAND (cos)
};

int nCommands = sizeof(commands)/sizeof(commands[0]);

int main()
{
    char *s;
    size_t len;
    char c[10];
    double x;
    int64_t res;

    do {
        printf("commande ? ");
        s = NULL;
        res = my_getline(&s, &len, stdin);

        int np = sscanf(s, "%s %lg", c, &x);
        if (strncmp(c, "quit", 4) == 0) break;
        if (np != 2) continue;

        for (int i=0; i<nCommands; i++)
            if (strcmp(commands[i].name, c) == 0) {
                double y = commands[i].function(x);
                printf("value %lg\n", y);
            }

    }
    while (1);

    return 0;
}