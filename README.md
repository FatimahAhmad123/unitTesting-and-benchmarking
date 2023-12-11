# Unit Testing and Benchmarking Project

This project demonstrates the use of unit testing and benchmarking in C++ using Google Test and Google Benchmark libraries.

## Project Details
### BinaryGap Function
The binaryGap function calculates the length of the longest binary gap (sequence of consecutive zeros) in the binary representation of an integer.

### CircularRotation Function
The circularRotation function performs a circular rotation of a vector by a specified number of positions.

## Project Directory Structure

The project is organized into the following directories:

- **src**: Contains the main source code.
- **app**: Includes the main application.
- **unittest**: Contains unit tests using Google Test.
- **benchmark**: Includes benchmarks using Google Benchmark.
- **thirdparty**: Has all the third-party libraries, such as Google Test and Google Benchmark.

## Building and Running

To build the project, follow these steps:

1. Create a `build` directory: `mkdir build && cd build`
2. Run CMake: `cmake ..`
3. Build the project: `make`

## Unit Testing

Unit tests are located in the `unittest` directory. To run the tests:

```bash
cd unittest
./Unittest
```

## Benchmarking

Benchmarks are located in the benchmark directory. To run the benchmarks:

```bash
cd benchmark
./benchmark
```

## CMake FLags to Build UnitTests and Benchmarks:

Use the following flags to enable build of unit tests and benchmarks (by default they are ON):


```bash
cmake BUILD_UNIT_TESTS:ON BUILD_BENCHMARKS: ON ..

```

## CMake Flags for Release and Debug:

To build the project in release or debug, use the following command:

```bash
cmake -DCMAKE_BUILD_TYPE:Release ..
cmake -DCMAKE_BUILD_TYPE:Debug ..
```
