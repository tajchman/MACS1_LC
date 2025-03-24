cmake_minimum_required(VERSION 3.10)
project(EX1)

set(CMAKE_INSTALL_MESSAGE LAZY)
set(CMAKE_MESSAGE_LOG_LEVEL "WARNING")
set(CMAKE_RULE_MESSAGES OFF)

add_subdirectory(alglin)

include_directories(alglin)

add_executable(ex1_static main.c)
target_link_libraries(ex1_static vecmat_static)

add_executable(ex1_shared main.c)
target_link_libraries(ex1_shared vecmat_shared)

install(TARGETS ex1_static ex1_shared DESTINATION .)
list(APPEND CMAKE_INSTALL_RPATH ${CMAKE_INSTALL_PREFIX}/lib)