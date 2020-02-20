#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("get_gc_constant") {
	REQUIRE(AGCTATAG == .375);
	REQUIRE(CGCTATANG == .50);
}

TEST_CASE("get_reversed_string") {
	REQUIRE(AGCTATAG == GATATCGA);
	REQUIRE(CGCTATAG == GATATCGC);
}

TEST_CASE("get_dna") {
	REQUIRE(AAAACCCGGT == ACCGGGTTTT);
	REQUIRE(CCCGGAAAAT == ATTTTCCGGG);
}