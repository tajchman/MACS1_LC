cmake_minimum_required(VERSION 3.10)
project(Localite)

add_executable(exe1 main1.c timer.c)
target_link_libraries(exe1 m)
add_executable(exe2 main2.c timer.c)
target_link_libraries(exe2 m)
