cmake_minimum_required(VERSION 3.7)
project(openmpsample)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_COMPILER /usr/local/opt/llvm/bin/clang++)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fopenmp -L/usr/local/opt/llvm/lib -Wl,-rpath,/usr/local/opt/llvm/lib")

set(SOURCE_FILES main.cpp)
add_executable(openmpsample ${SOURCE_FILES})