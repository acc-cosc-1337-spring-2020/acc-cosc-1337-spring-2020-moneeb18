#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "switch.cpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE('test menu function')
{
	REQUIRE(MENU(1) == "option 1");
	REQUIRE(MENU(2) == "option 2");
	REQUIRE(MENU(3) == "option 3");
	REQUIRE(MENU(4) == "option 4");
}