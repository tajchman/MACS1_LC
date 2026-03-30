cmake_minimum_required(VERSION 3.28)
project(VariableArg)

add_executable(stdargs1 main1.c)
add_executable(stdargs2 main2.c)
add_executable(stdargs3 main3.c)
set_property(TARGET stdargs3 PROPERTY C_STANDARD 23)