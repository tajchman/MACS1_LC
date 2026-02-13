cmake_minimum_required(VERSION 3.10)
project(capacite C)

add_executable(capacite main.c vecteur.c)
install(TARGETS capacite DESTINATION .)
