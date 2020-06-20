#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify get_gc_content test 1")
{
	REQUIRE(get_gc_content("AGCTATAG") == 0.375);
}
TEST_CASE("Verify get_gc_content test 2")
{
	REQUIRE(get_gc_content("CGCTATAG") == 0.50);
}

TEST_CASE("Verify get_reverse_string test 1")
{
	REQUIRE(get_gc_content("AGCTATAG") == "GATATCGA");
}
TEST_CASE("Verify get_reverse_string test 2")
{
	REQUIRE(get_gc_content("CGCTATAG") == "GATATCGC");
}

TEST_CASE("Verify get_dna_complement test 1")
{
	REQUIRE(get_gc_content("AAAACCCGGT") == "ACCGGGTTTT");
}
TEST_CASE("Verify get_dna_complement test 2")
{
	REQUIRE(get_gc_content("CCCGGAAAAT") == "ATTTTCCGGG");
}