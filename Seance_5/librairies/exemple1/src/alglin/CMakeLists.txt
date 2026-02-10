add_library(vecmat_shared SHARED matrice.c vecteur.c prodmat.c)
add_library(vecmat_static STATIC matrice.c vecteur.c prodmat.c)
install(TARGETS vecmat_shared DESTINATION lib)
