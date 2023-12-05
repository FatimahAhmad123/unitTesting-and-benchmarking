#include <iostream>
#include "../include/codility.h"

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
	std::cout << codility.binaryGap(0) << std::endl;		  // Expected: 0

	return 0;
}
