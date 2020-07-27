import Lib

main :: IO ()
main = do
    putStrLn "this is sqrt-hs"
    print $ mysqrt 1764
    print $ mysqrt (-1764)

