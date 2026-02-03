#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Item
{
  char * mot;
  struct Item * suivant;
} Item;
typedef Item * pListe;

Item * alloueItem(const char * word)
{
  Item * I;

  // completer

  return I;
}

/* Nouveau mot ajoute en fin de liste */
void appendMot(pListe *L, const char * word)
{
  Item * I = alloueItem(word);
    
  if (*L == NULL)
    *L = I;
  else {
    Item *p = *L;
    while (p->suivant)
      p = p->suivant;
    p->suivant = I;            
  }
}

/* 
Insere un item dans la liste entre p et q
si p == NULL insere en debut de liste
si q == NULL insere en fin de liste
*/
void insereItem(pListe * L, Item *i, Item *p, Item *q)
{
  // completer
}

/* Insere mot dans une liste 
dans l'ordre alphabetique */
void insereMot(pListe *L, const char * word)
{
  Item * I = alloueItem(word);
    
  if (*L == NULL)
    *L = I;
  else {
    Item *p = NULL, *q = *L;
        
    while (q) {
      if (strcmp(word, q->mot) < 0) break;
      p = q;
	    q = q->suivant;
    }

    insereItem(L, I, p, q);
  }
}

/*
Affiche un titre puis 
tous les mots de la liste
*/
void afficheListe(const char*titre, pListe L)
{
  printf("\n%s:\n", titre);

  // completer

  printf("\n");
}

int main(int argc, char **argv)
{
  // liste1 contiendra les mots 
  // dans l'ordre fourni par l'utilisateur
  pListe liste1 = NULL;

  // liste2 contiendra les mots 
  // dans l'ordre alphabetique
  pListe liste2 = NULL;

  for (int i=1; i<argc; i++) {
    insereMot(&liste1, argv[i]);
    appendMot(&liste2, argv[i]);
  }

  afficheListe("liste triee", liste1);
  afficheListe("liste non triee", liste2);
  return 0;
}
