cmake_minimum_required(VERSION 3.10)
project(UnitTestBenchmark)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)
add_subdirectory(app)
add_subdirectory(thirdparty/googletest)
add_subdirectory(unittest)