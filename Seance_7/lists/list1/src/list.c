#include <stdio.h>
#include<stdlib.h>
#include "list.h"

void append(List *L, int v)
{
  Node * newNode = (Node *) malloc(sizeof(Node));
  newNode->value = v;
  newNode->next = NULL;

  if (*L == NULL)
    *L = newNode;
  else {
    Node *n = *L;
    while (1) {
      if (n->next)
        n = n->next;
      else {
        n->next = newNode;
        break;
      }
    }
  }
}

void print(List L)
{
  Node *n = L;
  while (n) {
    printf("%d\n", n->value);
    n = n->next; 
  }
}