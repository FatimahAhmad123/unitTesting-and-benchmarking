cmake_minimum_required(VERSION 3.10)
project(UnitTestBenchmark)

set(CMAKE_CXX_STANDARD 17)

add_executable(UnitTest unittest.cpp)

target_link_libraries(UnitTest PRIVATE codility gtest_main)
