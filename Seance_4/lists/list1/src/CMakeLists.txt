cmake_minimum_required(VERSION 3.10)
project(list1 C)

add_executable(list1 main.c list.c)
install(TARGETS list1 DESTINATION .)
