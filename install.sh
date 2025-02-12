#!/bin/sh

sudo apt-get update -y

echo "Installing CMake, ninja, gcc"

sudo apt-get install -y cmake ninja-build g++

#echo "Downloading opencv"
#
#cd ~
#mkdir libs
#cd libs
#wget -O opencv.zip https://github.com/opencv/opencv/archive/4.x.zip
#unzip opencv.zip
#mv opencv-4.x opencv
#
#echo "Building opencv"
#
#mkdir -p build && cd build
#cmake -GNinja ../opencv
#ninja
#
#echo "Result:"
#
#sudo apt-get install -y tree
#tree

echo "Installing opencv"

# https://askubuntu.com/questions/334158/installing-opencv
sudo apt-get install -y libopencv-dev

sudo apt-get upgrade -y