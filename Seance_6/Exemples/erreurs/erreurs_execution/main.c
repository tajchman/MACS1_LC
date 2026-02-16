#include <stdio.h>
  
const char *titre;

void initialise() {
  const char s[] = "Exemple d'erreur";
  titre = s;
}
 
void affiche() {
  printf("'%s'\n", titre);
}
 
int main() {
  initialise();
  affiche();
  return 0;
}