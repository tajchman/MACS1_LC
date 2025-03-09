cmake_minimum_required(VERSION 3.10)
project(insere C)

add_executable(insere insere.c vecteur.c)
install(TARGETS insere DESTINATION .)
