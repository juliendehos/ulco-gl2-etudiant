module LibSpec (main, spec) where

import Test.Hspec

import Lib

main :: IO ()
main = hspec spec

spec :: Spec
spec = 
    describe "mul2" $ do
        it "mul2 0" $ mul2 0 `shouldBe` (0::Int)
        it "mul2 21" $ mul2 21 `shouldBe` (42::Int)
        it "mul2 (-21)" $ mul2 (-21) `shouldBe` (-42::Int)
