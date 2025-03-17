cmake_minimum_required(VERSION 3.10)
project(vecteurs C)

foreach(v 2a 2b)
  add_executable(exec${v} main${v}.c vecteur.c)
  install(TARGETS exec${v} DESTINATION .)
endforeach()

add_executable(exec2c main2c.c vecteur2.c)
install(TARGETS exec2c DESTINATION .)
