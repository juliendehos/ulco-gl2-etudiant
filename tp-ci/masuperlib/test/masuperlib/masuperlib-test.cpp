#include <masuperlib/masuperlib.hpp>

#include <catch2/catch.hpp>

TEST_CASE( "mul2 0" ) {
    REQUIRE( masuperlib::mul2(0) == 0 );
}

TEST_CASE( "mul2 21" ) {
    REQUIRE( masuperlib::mul2(21) == 42 );
}

