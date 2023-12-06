cmake_minimum_required(VERSION 3.10)
project(UnitTestBenchmark)

set(CMAKE_CXX_STANDARD 17)

add_library(codility codility.cpp)

target_include_directories(codility PUBLIC ${CMAKE_SOURCE_DIR}/include)
