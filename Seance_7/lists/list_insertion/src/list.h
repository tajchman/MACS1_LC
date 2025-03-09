#ifndef _LIST_H
#define _LIST_H

struct _node {
  int value;
  struct _node * next;
};

typedef struct _node Node;
typedef Node * List;

void push_front(List *L, int v);
void push_back (List *L, int v);
void insert_after (Node *N, int v);

void print(List L);

#endif
