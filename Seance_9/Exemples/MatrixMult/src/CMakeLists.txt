cmake_minimum_required(VERSION 3.20)
project(MatrixMult)

set(CMAKE_CXX_FLAGS "-O0")
set(CMAKE_C_FLAGS "-O0")

add_subdirectory(common)
include_directories(common)

add_subdirectory(0_naive)
add_subdirectory(1_loop_change)
add_subdirectory(2_loop_change_unrolling)
add_subdirectory(3_tile)
add_subdirectory(4_tile_unrolling)
add_subdirectory(5_tile_avx)
add_subdirectory(6_naive_openmp)
add_subdirectory(7_naive_openmp_avx)
add_subdirectory(8_tile_openmp_avx)
add_subdirectory(9_naive_pthreads)
