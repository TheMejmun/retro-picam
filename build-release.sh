#!/bin/sh

mkdir cmake-build-release
cd cmake-build-release

echo "Configuring CMake"
cmake -DCMAKE_BUILD_TYPE=Release ..

echo "Building project"
cmake --build .
