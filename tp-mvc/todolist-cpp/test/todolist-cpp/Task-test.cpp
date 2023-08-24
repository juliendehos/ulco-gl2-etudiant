#include <todolist-cpp/Task.hpp>

#include <catch2/catch.hpp>

TEST_CASE( "test 1" ) {
    Task t {1, "TODO"};
    REQUIRE( t._id == 1 );
    REQUIRE( t._name == "TODO" );
}

