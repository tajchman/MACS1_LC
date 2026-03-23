cmake_path(GET CMAKE_CURRENT_SOURCE_DIR FILENAME VERSION)
configure_file(../common/version.h.in version.h @ONLY)

include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_executable(${VERSION}.exe main.c matmul_${VERSION}.c)
target_link_libraries(${VERSION}.exe common)
#target_compile_options(${VERSION}.exe PRIVATE -O3 -ffast-math -march=native)

install(TARGETS ${VERSION}.exe DESTINATION .)
