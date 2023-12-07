cmake_minimum_required(VERSION 3.10)
project(UnitTestBenchmark)

set(CMAKE_CXX_STANDARD 17)

# Option to enable/disable unit tests
option(BUILD_UNIT_TEST "Build unit tests" ON)

if(BUILD_UNIT_TEST)
	add_subdirectory(unittest)
endif()

# Option to enable/disable benchmarks
option(BUILD_BENCHMARK "Build benchmarks" ON)

if(BUILD_BENCHMARK)
	add_subdirectory(benchmark)
endif()

add_subdirectory(src)
add_subdirectory(app)
