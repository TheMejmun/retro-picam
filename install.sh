echo "Installing CMake, ninja, gcc, wget, unzip"

sudo apt-get install -y cmake ninja-build g++ wget unzip

echo "Downloading opencv"

cd ~
mkdir libs
cd libs
wget -O opencv.zip https://github.com/opencv/opencv/archive/4.11.zip
unzip opencv.zip
mv opencv-4.11 opencv
cd opencv

echo "Building opencv"

mkdir -p build && cd build
cmake -GNinja ../opencv
ninja

echo "Result:"
sudo apt-get install -y tree
tree