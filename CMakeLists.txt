cmake_minimum_required(VERSION 3.30)
project(RaspCam)

set(CMAKE_CXX_STANDARD 20)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

file(GLOB_RECURSE SOURCE_FILES CONFIGURE_DEPENDS source/*.cpp)
message(SOURCE_FILES="${SOURCE_FILES}")
add_executable(RaspCam ${SOURCE_FILES})
target_include_directories(RaspCam PRIVATE include)

target_link_libraries(RaspCam ${OpenCV_LIBS})

