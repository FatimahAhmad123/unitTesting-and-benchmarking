#include <gtest/gtest.h>
#include "codility.h"

TEST(BinaryGapTest, RegularCases)
{
	Codility codility;
	ASSERT_EQ(codility.binaryGap(33), 4);
	ASSERT_EQ(codility.binaryGap(529), 4);
	ASSERT_EQ(codility.binaryGap(51272), 4);
}

TEST(BinaryGapTest, OutOfBoundValues)
{
	Codility codility;

	ASSERT_EQ(codility.binaryGap(-20), 0);
	ASSERT_EQ(codility.binaryGap(2147483649), 0);
}

TEST(BinaryGapTest, NotBetweenOnes)
{
	Codility codility;

	ASSERT_EQ(codility.binaryGap(32), 0);
	ASSERT_EQ(codility.binaryGap(52), 1);
}

TEST(BinaryGapTest, EqualGaps)
{
	Codility codility;

	ASSERT_EQ(codility.binaryGap(36), 2);
	ASSERT_EQ(codility.binaryGap(546), 3);
}

TEST(CircularRotationTest, RegularCases)
{
	Codility codility;

	std::vector<int> A = {1, 2, 3, 4, 5, 6, 7};
	std::vector<int> expected = {5, 6, 7, 1, 2, 3, 4};
	std::vector<int> result = codility.circularRotation(A, 3);

	ASSERT_EQ(result, expected);
}
TEST(CircularRotationTest, EmptyVector)
{
	Codility codility;

	std::vector<int> A = {};
	std::vector<int> expected = {};
	ASSERT_EQ(codility.circularRotation(A, 3), expected);
}

TEST(CircularRotationTest, OutOfBoundRotationSize)
{
	Codility codility;
	std::vector<int> A = {1, 2, 3, 4, 5};
	std::vector<int> expected = {5, 1, 2, 3, 4};
	ASSERT_EQ(codility.circularRotation(A, 6), expected);
}

int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
