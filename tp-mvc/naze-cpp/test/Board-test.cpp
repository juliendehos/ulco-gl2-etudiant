
#include <Board.hpp>

#include <catch2/catch.hpp>

class BoardTest : public Board {
    public:
        BoardTest(int i, int j) : Board(i, j) {}
};

TEST_CASE( "init, 1" ) {
    Board b;
    REQUIRE( b.getI() == 0 );
    REQUIRE( b.getJ() == 0 );
}

TEST_CASE( "init, 2" ) {
    BoardTest b(1,2);
    REQUIRE( b.getI() == 1 );
    REQUIRE( b.getJ() == 2 );
}

// TODO

/*
    describe "tryGoLeft" $ do
        it "ok" 
            $ _ij (tryGoLeft newModel {_ij = (7,3)}) `shouldBe` (7,2)
        it "out of the board"
            $ _ij (tryGoLeft newModel {_ij = (0,0)}) `shouldBe` (0,0)
        it "wall" 
            $ _ij (tryGoLeft newModel {_ij = (7,2)}) `shouldBe` (7,2)

    describe "tryGoRight" $ do
        it "ok" 
            $ _ij (tryGoRight newModel {_ij = (7,2)}) `shouldBe` (7,3)
        it "out of the board"
            $ _ij (tryGoRight newModel {_ij = (0,9)}) `shouldBe` (0,9)
        it "wall" 
            $ _ij (tryGoRight newModel {_ij = (7,3)}) `shouldBe` (7,3)

    describe "tryGoUp" $ do
        it "ok" 
            $ _ij (tryGoUp newModel {_ij = (1,3)}) `shouldBe` (2,3)
        it "out of the board"
            $ _ij (tryGoUp newModel {_ij = (9,0)}) `shouldBe` (9,0)
        it "wall" 
            $ _ij (tryGoUp newModel {_ij = (2,3)}) `shouldBe` (2,3)

    describe "tryGoDown" $ do
        it "ok" 
            $ _ij (tryGoDown newModel {_ij = (1,3)}) `shouldBe` (0,3)
        it "out of the board"
            $ _ij (tryGoDown newModel {_ij = (0,0)}) `shouldBe` (0,0)
        it "wall" 
            $ _ij (tryGoDown newModel {_ij = (4,3)}) `shouldBe` (4,3)

*/

