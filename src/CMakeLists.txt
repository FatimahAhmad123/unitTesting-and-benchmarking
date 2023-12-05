cmake_minimum_required(VERSION 3.10)
project(UnitTestBenchmark)

set(CMAKE_CXX_STANDARD 17)

file(GLOB SOURCES *.cpp)

add_library(codility ${SOURCES})

target_include_directories(codility PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
