cmake_minimum_required(VERSION 3.10)

project(test_openCV)

find_package(OpenCV REQUIRED PATHS /home/anikde/opencv/build/install NO_DEFAULT_PATH)

message("****" ${OpenCV_LIBS}) 

add_compile_options(-Wall -Wextra -Wpedantic)

add_executable(opentest test_openCV.cpp)

target_link_libraries(opentest PRIVATE ${OpenCV_LIBS})