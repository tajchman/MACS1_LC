cmake_minimum_required(VERSION 3.10)
project(SystemeLineaire C)

add_subdirectory(data)
add_subdirectory(types)

include_directories(types)
add_executable(code2 
    main.c
)
target_link_libraries(code2 vecmat)

install(TARGETS code2 DESTINATION bin)

