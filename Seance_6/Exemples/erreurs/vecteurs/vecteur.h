typedef struct _vecteur {
  int n; 
  const char * nom;
  double * c;
} vecteur;

void cree(vecteur *v, int n, const char *s);
void detruit(vecteur *v);


