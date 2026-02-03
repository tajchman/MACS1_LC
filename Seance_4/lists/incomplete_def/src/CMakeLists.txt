cmake_minimum_required(VERSION 3.10)
project(incomplet C)

add_executable(incomplet main.c)
install(TARGETS incomplet DESTINATION .)
