module ModelSpec (main, spec) where

import Test.Hspec

import Model

main :: IO ()
main = hspec spec

spec :: Spec
spec = do

    describe "newModel" $ 
        it "initial ij"
            $ _ij newModel `shouldBe` (0,0)

    describe "tryGoLeft" $ do
        it "ok" 
            $ _ij (tryGoLeft newModel {_ij = (7,3)}) `shouldBe` (7,2)
        it "out of the board"
            $ _ij (tryGoLeft newModel {_ij = (0,0)}) `shouldBe` (0,0)
        it "wall" 
            $ _ij (tryGoLeft newModel {_ij = (7,2)}) `shouldBe` (7,2)

{-
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
-}

