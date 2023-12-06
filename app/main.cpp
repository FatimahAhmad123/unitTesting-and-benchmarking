#include <iostream>
#include "codility.h"

int main()
{

	Codility codility;
	std::cout << codility.binaryGap(9) << std::endl;		  // Expected: 2
	std::cout << codility.binaryGap(529) << std::endl;		  // Expected: 4
	std::cout << codility.binaryGap(51272) << std::endl;	  // Expected: 4
	std::cout << codility.binaryGap(15) << std::endl;		  // Expected: 0
	std::cout << codility.binaryGap(53) << std::endl;		  // Expected: 1
	std::cout << codility.binaryGap(2147483647) << std::endl; // Expected: 0
	std::cout << codility.binaryGap(2147483648) << std::endl; // Expected: 0
	std::cout << codility.binaryGap(32) << std::endl;		  // Expected: 0
	std::cout << codility.binaryGap(52) << std::endl;		  // Expected: 1

	std::vector<int> A = {1, 2, 3, 4, 5, 6, 7};
	int k = 5;

	std::vector<int> rotatedVector = codility.circularRotation(A, k);

	// Printing the rotated vector
	for (int i = 0; i < rotatedVector.size(); i++)
	{
		std::cout << rotatedVector[i] << " ";
	}
	std::cout << std::endl;
	// Rotated once: [7, 1, 2, 3, 4, 5, 6]
	// Rotated twice: [6, 7, 1, 2, 3, 4, 5]
	// Rotated thrice: [5, 6, 7, 1, 2, 3, 4]
	// Rotated four times: [4, 5, 6, 7, 1, 2, 3]
	// Rotated five times: [3, 4, 5, 6, 7, 1, 2]
	return 0;
}
