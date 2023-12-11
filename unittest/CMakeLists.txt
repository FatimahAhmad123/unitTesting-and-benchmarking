cmake_minimum_required(VERSION 3.10)
project(UnitTestBenchmark)

set(CMAKE_CXX_STANDARD 17)

include_directories(${CMAKE_SOURCE_DIR}/thirdparty/googletest/googletest/include)

add_executable(UnitTest unittest.cpp)

target_link_libraries(UnitTest PRIVATE codility gtest gtest_main pthread)
