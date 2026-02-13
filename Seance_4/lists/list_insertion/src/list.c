#include <stdio.h>
#include<stdlib.h>
#include "list.h"

Node * createNode(int v)
{
  Node * newNode = (Node *) malloc(sizeof(Node));
  newNode->value = v;
  newNode->next = NULL;
  return newNode;
}

void push_front(List *L, int v)
{
  Node * N = createNode(v);

  if (*L)
    N->next = *L;
  *L = N;
}

void push_back (List *L, int v)
{
  Node * N = createNode(v);

  if (*L == NULL)
    *L = N;
  else {
    Node *pN = *L;
    while (1) {
      if (pN->next)
        pN = pN->next;
      else {
        pN->next = N;
        break;
      }
    }
  }
}
void insert_after (Node *N, int v)
{
  if (N == NULL)
    return;
  
  Node * newN = createNode(v);
  newN->next = N->next;
  N->next = newN;
}

void print(List L)
{
  Node *n = L;
  while (n) {
    printf("%d\n", n->value);
    n = n->next; 
  }
}