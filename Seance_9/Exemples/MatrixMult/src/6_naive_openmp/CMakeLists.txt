
cmake_path(GET CMAKE_CURRENT_SOURCE_DIR FILENAME VERSION)
configure_file(../common/version.h.in version.h @ONLY)

include_directories(${CMAKE_CURRENT_BINARY_DIR})

find_package(OpenMP)
add_executable(${VERSION}.exe  main.c matmul_${VERSION}.c)
if(OpenMP_C_FOUND)
    target_link_libraries(${VERSION}.exe PUBLIC OpenMP::OpenMP_C common)
else()
    target_link_libraries(${VERSION}.exe PUBLIC common)
endif()

install(TARGETS ${VERSION}.exe DESTINATION .)