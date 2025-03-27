#include "gmock/gmock.h"
#include "prime_factors.cpp"
using namespace std;
TEST(PrimeFactors, Of1) {
	PrimeFactor prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}
TEST(PrimeFactors, Of2) {
	PrimeFactor prime_factor;
	vector<int> expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}
TEST(PrimeFactors, Of3) {
	PrimeFactor prime_factor;
	vector<int> expected = { 3 };
	EXPECT_EQ(expected, prime_factor.of(3));
}
TEST(PrimeFactors, Of6) {
	PrimeFactor prime_factor;
	vector<int> expected = { 2,3 };
	EXPECT_EQ(expected, prime_factor.of(6));
}
TEST(PrimeFactors, Of9) {
	PrimeFactor prime_factor;
	vector<int> expected = { 3,3 };
	EXPECT_EQ(expected, prime_factor.of(9));
}
int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}