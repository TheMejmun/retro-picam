#!/bin/sh

mkdir build
cd build

echo "Configuring CMake"
cmake ../retro-picam

echo "Building project"
cmake --build .
