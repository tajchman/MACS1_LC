#! /bin/bash

cmake -S src -B build -DCMAKE_INSTALL_PREFIX=install
cmake --build    build
cmake --install  build

