#include "../include/codility.h"

int Codility::binaryGap(int N)
{
	if (N < 1 || N > 2147483647)
	{
		return 0;
	}

	int largestGap = 0;
	int currentGap = 0;

	while (N > 0)
	{
		int binary = N % 2;

		if (binary == 0)
		{
			currentGap++;
		}
		else if (currentGap > 0)
		{
			largestGap = std::max(largestGap, currentGap);
			currentGap = 0;
		}

		N = N / 2;
	}

	return largestGap;
}

std::vector<int> Codility::circularRotation(std::vector<int> &A, int k)
{
	int n = A.size();
	k = k % n;

	std::vector<int> rotatedVector = A;

	// Push first d elements from last to the beginning
	for (int i = 0; i < k; i++)
	{
		int val = A.back();
		A.pop_back();
		A.insert(A.begin(), val);
	}

	return A;
}