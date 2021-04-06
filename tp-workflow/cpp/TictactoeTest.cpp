#include "Tictactoe.hpp"
#include <sstream>

#include <CppUTest/CommandLineTestRunner.h>

void testerJeu(const std::string & str, const Jeu & jeu) {
    std::stringstream oss;
    oss << jeu;
    CHECK_EQUAL(str, oss.str());
}

TEST_GROUP(GroupTictactoe) { };

TEST(GroupTictactoe, test_Jeu) { 
    Jeu jeu;
    // TODO
    CHECK(true);
}

// TODO

