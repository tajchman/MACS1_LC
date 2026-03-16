cmake_minimum_required(VERSION 3.10)
project(ExempleCmake C)

include_directories(types)

add_executable(code.exe 
   main.c 
   types/vecteur.c
   types/matrice.c  
   types/operations.c)
install(TARGETS code.exe DESTINATION .)