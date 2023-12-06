#include <benchmark/benchmark.h>
#include "codility.h"

int iterations = 10;
Codility codility;
static void BM_BinaryGap_RegularCases(benchmark::State &state)
{

	for (auto _ : state)
	{
		for (int i = 0; i < iterations; ++i)
		{
			codility.binaryGap(529);
		}
	}
}
BENCHMARK(BM_BinaryGap_RegularCases);

static void BM_BinaryGap_OutOfBoundValues(benchmark::State &state)
{

	for (auto _ : state)
	{
		for (int i = 0; i < iterations; ++i)
		{
			codility.binaryGap(-5);
		}
	}
}
BENCHMARK(BM_BinaryGap_OutOfBoundValues);

static void BM_BinaryGap_LargeNumber(benchmark::State &state)
{

	for (auto _ : state)
	{
		for (int i = 0; i < iterations; ++i)
		{
			codility.binaryGap(2147483647);
		}
	}
}
BENCHMARK(BM_BinaryGap_LargeNumber);

static void BM_CircularRotation_RegularCases(benchmark::State &state)
{

	std::vector<int> A = {1, 2, 3, 4, 5, 6, 7};
	for (auto _ : state)
	{
		for (int i = 0; i < iterations; ++i)
		{
			codility.circularRotation(A, 3);
		}
	}
}
BENCHMARK(BM_CircularRotation_RegularCases);

static void BM_CircularRotation_EmptyVector(benchmark::State &state)
{

	std::vector<int> A;
	for (auto _ : state)
	{
		for (int i = 0; i < iterations; ++i)
		{
			codility.circularRotation(A, 3);
		}
	}
}
BENCHMARK(BM_CircularRotation_EmptyVector);

static void BM_CircularRotation_EmptyVectorLargeK(benchmark::State &state)
{

	std::vector<int> A;
	for (auto _ : state)
	{
		for (int i = 0; i < iterations; ++i)
		{
			codility.circularRotation(A, 100);
		}
	}
}
BENCHMARK(BM_CircularRotation_EmptyVectorLargeK);

BENCHMARK_MAIN();
