#include <stdlib.h>
#include <stdio.h>

typedef struct _node {
  double value;
  struct _node *next;
} node;
typedef node * list;

void append_list(list *l, double v) {
  node * n = (node *) malloc(sizeof(node));
  n->value = v;
  n->next = NULL;
  if (*l == NULL)
    *l = n;
  else
    (*l)->next = n;
}

void print_list(list l)
{
  for (node *p = l; p != NULL; p = p->next)
    printf("%g\n", p->value);
}

/*
void free_list(list l) {
  for (node *p = l; p != NULL; p = p->next)
    free(p);
}
*/

int main() {
  list L = NULL;
  append_list(&L, 1.5);
  append_list(&L, 2.3);
  print_list(L);
/*
 *   free_list(L);
 */Y
  return 0;
}
