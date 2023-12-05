#include <iostream>
#include <cmath>
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
