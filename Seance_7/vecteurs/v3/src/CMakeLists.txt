cmake_minimum_required(VERSION 3.10)
project(vecteurs C)

foreach(v 3a 3b)
  add_executable(exec${v} main${v}.c vecteur.c)
  install(TARGETS exec${v} DESTINATION .)
endforeach()

