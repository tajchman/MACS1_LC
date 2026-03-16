cmake_minimum_required(VERSION 3.10)
project(ExempleCmake2 C)

add_subdirectory(types)
include_directories(types)

foreach(i RANGE 1 4)
   add_executable(code${i}.exe main${i}.c)
   target_link_libraries(code${i}.exe algebrelin)

   install(TARGETS code${i}.exe DESTINATION .)
endforeach()