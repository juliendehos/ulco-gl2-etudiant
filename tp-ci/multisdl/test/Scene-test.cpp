#include "../src/Scene.hpp"

#include <catch2/catch.hpp>

TEST_CASE( "init 1" ) {
    Scene scene;
    REQUIRE(scene.xpos() == 100);
    REQUIRE(scene.radius() == 10);
}

