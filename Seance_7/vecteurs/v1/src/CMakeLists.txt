cmake_minimum_required(VERSION 3.10)
project(vecteurs C)

add_executable(exec1 main1.c)

install(TARGETS exec1 DESTINATION .)
