#!/bin/sh

sudo apt-get update -y
sudo apt-get install -y cmake ninja-build g++
sudo apt-get install -y libopencv-dev libcamera-dev
sudo apt-get upgrade -y
sudo apt-get -y autoremove

echo "fin."
