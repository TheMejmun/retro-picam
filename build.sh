#!/bin/sh

mkdir build
cd build

echo "Configuring CMake"
cmake ..

echo "Building project"
cmake --build .
