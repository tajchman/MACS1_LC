#! /bin/bash

cmake -S src -B build -DCMAKE_INSTALL_PREFIX=install -DCMAKE_BUILD_TYPE=Debug
cmake --build    build
cmake --install  build

