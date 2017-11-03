cmake_minimum_required(VERSION 3.6)
project(Blockchain)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp sources/sha512.cpp)
add_executable(Blockchain ${SOURCE_FILES})