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

int pop_front(List *L)
{
  if (*L == NULL) return -1;

  Node * n = *L;
  *L = n->next;

  int val = n->value;
  free(n);

  return val;
}

int pop_back (List *L)
{
  int val;
  if (*L == NULL) return -1;

  Node *n = *L;
  if (n->next == NULL) {
    val = n->value;
    free(*L);
    *L = NULL;
    return val;
  }

  while (n->next->next != NULL) {
      n = n->next;
  }

  val = n->next->value;
  free(n->next);
  n->next = NULL;
  return val;
}

int pop(List *L, int n) {

  int i = 0;
  int val = -1;
  Node * current = *L;
  Node * temp_node = NULL;

  if (n == 0) {
    return pop_front(L);
  }

  for (i = 0; i < n-1; i++) {
      if (current->next == NULL) {
          return val;
      }
      current = current->next;
  }

  if (current->next == NULL) {
      return val;
  }

  temp_node = current->next;
  val = temp_node->value;
  current->next = temp_node->next;
  free(temp_node);

  return val;
}

void print(List L)
{
  Node *n = L;
  while (n) {
    printf("%d\n", n->value);
    n = n->next; 
  }
}