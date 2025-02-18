cmake_minimum_required(VERSION 3.25)
project(retro-picam)

set(CMAKE_CXX_STANDARD 20)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

find_package(libcamera REQUIRED)
include_directories(${libcamera_INCLUDE_DIRS})

file(GLOB_RECURSE SOURCE_FILES CONFIGURE_DEPENDS source/*.cpp)
message(SOURCE_FILES="${SOURCE_FILES}")
add_executable(retro-picam ${SOURCE_FILES})
target_include_directories(retro-picam PRIVATE include)

target_link_libraries(retro-picam ${OpenCV_LIBS})
target_link_libraries(retro-picam ${libcamera_LIBS})

