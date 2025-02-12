#!/bin/sh

mkdir cmake-build-debug
cd cmake-build-debug

echo "Configuring CMake"
cmake -DCMAKE_BUILD_TYPE=Debug ..

echo "Building project"
cmake --build .
