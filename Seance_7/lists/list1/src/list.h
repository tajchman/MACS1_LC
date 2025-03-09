#ifndef _LIST_H
#define _LIST_H

struct _node {
  int value;
  struct _node * next;
};

typedef struct _node Node;
typedef Node * List;

void append(List *L, int v);

void print(List L);

#endif
