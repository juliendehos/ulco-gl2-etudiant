import Lib

mynegate :: Double -> Double
mynegate x = negate x

main :: IO ()
main = do
    putStrLn "this is sqrt-hs"
    print $ mynegate $ mysqrt 1764
    print $ mynegate $ mysqrt (-1764)

    