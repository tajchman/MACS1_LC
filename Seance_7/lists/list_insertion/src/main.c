#include <stdio.h>
#include "list.h"

int main()
{
  List L = NULL;

  append(&L, 2);
  append(&L, 5);
  append(&L, -3);

  print(L);
  return 0;
}