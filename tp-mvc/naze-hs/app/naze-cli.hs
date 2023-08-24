-- import Control.Monad
import System.IO

-- import Model

main :: IO ()
main = do
    hSetBuffering stdin NoBuffering
    putStr "> "
    hFlush stdout
    c <- getChar
    putStrLn ""
    print c

