cmake_minimum_required(VERSION 3.10)
project(SystemeLineaire C)

add_subdirectory(data)
add_subdirectory(types)

include_directories(types)
add_executable(code3 
    systeme.c
)
target_link_libraries(code3 vecmat)

install(TARGETS code3 DESTINATION bin)

