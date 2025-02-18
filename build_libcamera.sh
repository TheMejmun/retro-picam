#!/bin/sh
cwdir="$(pwd)"

cd ~

arch="arm64"

sudo apt-get update
sudo apt-get install -y python3-pip:$arch git:$arch python3-jinja2:$arch
sudo apt-get install -y libboost-dev:$arch
sudo apt-get install -y libgnutls28-dev:$arch openssl:$arch libtiff-dev:$arch pybind11-dev:$arch
sudo apt-get install -y qtbase5-dev:$arch libqt5core5a:$arch libqt5widgets:$arch
sudo apt-get install -y meson:$arch cmake:$arch
sudo apt-get install -y python3-yaml:$arch python3-ply:$arch
# sudo apt-get install -y libglib2.0-dev:$arch libgstreamer-plugins-base1.0-dev:$arch

git clone https://github.com/raspberrypi/libcamera.git
cd libcamera
meson setup build --buildtype=release -Dpipelines=rpi/vc4,rpi/pisp -Dipas=rpi/vc4,rpi/pisp -Dv4l2=true -Dgstreamer=disabled -Dtest=false -Dlc-compliance=disabled -Dcam=disabled -Dqcam=disabled -Ddocumentation=disabled -Dpycamera=enabled
ninja -C build install
cd ..

cd $cwdir
