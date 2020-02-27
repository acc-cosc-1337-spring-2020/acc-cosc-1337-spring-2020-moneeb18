#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vectors.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("get maxium ") {
	REQUIRE(get_max_from_vector(3, 8, 1, 99, 1000) == 1000);
	REQUIRE(get_max_from_vector(15, 12, 11, 99, 88) == 99);
	REQUIRE(get_max_from_vector(150, 120, 11, 990, 88888) == 88888);
}

TEST_CASE("number is prime") {
	REQUIRE(bool is_prime(2)==true);
	REQUIRE(bool is_prime(4) ==false );
	REQUIRE(bool is_prime(43) == true);
	REQUIRE(bool is_prime(44) ==false );
}	

TEST_CASE("test prime numbers of vectors") {
	REQUIRE(vector_of_primes(10)== 2, 3, 5, 7);
	REQUIRE(vector_of_primes(50)== 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47);
}