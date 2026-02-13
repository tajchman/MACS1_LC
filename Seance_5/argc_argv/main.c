#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int n;
  double v;
  char * end;
  if (argc == 1 || argc > 3) message_erreur(1);
  n = strtol( argv[0], &end, 10);
  if (end != NULL) message_erreur(2);
  if (argc == 3) {
    v = strtod(argv[2], &end);
    if (end != NULL) message_erreur(3);
  }
  else
    v = 1.5;

  return 0;
}