cmake_minimum_required(VERSION 3.20)
project(MatrixMult)

add_subdirectory(common)
include_directories(common)

add_subdirectory(naive)
add_subdirectory(loop_change)
add_subdirectory(tile)
add_subdirectory(tile_avx)
