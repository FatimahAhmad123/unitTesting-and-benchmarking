cmake_minimum_required(VERSION 3.10)
project(UnitTestBenchmark)

set(CMAKE_CXX_STANDARD 17)

set(BENCHMARK_ENABLE_INSTALL OFF)
set(BENCHMARK_ENABLE_TESTING OFF)
add_subdirectory(${CMAKE_SOURCE_DIR}/thirdparty/benchmark abc)
add_subdirectory(${CMAKE_SOURCE_DIR}/thirdparty/googletest def)

set(GTEST_ROOT "/thirdparty/googletest/googletest/include/gtest" CACHE PATH "Path to googletest")

add_executable(benchmark_exec benchmark.cpp)

target_link_libraries(benchmark_exec PRIVATE codility benchmark::benchmark)

target_include_directories(benchmark_exec PRIVATE ${CMAKE_SOURCE_DIR}/include)
