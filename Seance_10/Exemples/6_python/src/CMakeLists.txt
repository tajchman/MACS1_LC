cmake_minimum_required(VERSION 3.20)
project(Python)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

find_package(Python COMPONENTS Development Interpreter NumPy)

add_library(calcul SHARED calculmodule.c)
target_link_libraries(calcul PUBLIC Python::Python Python::NumPy)
set_target_properties(calcul PROPERTIES PREFIX "")
set_target_properties(calcul PROPERTIES SUFFIX ".so")