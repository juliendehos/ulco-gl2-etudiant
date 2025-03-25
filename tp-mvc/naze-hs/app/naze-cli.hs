-- import Control.Monad
import System.IO

-- import Model

-- get special keys
getKey :: IO String
getKey = reverse <$> go ""
    where
        go chars = do
            char <- getChar
            more <- hReady stdin
            (if more then go else return) (char : chars)

run :: IO ()
run = do
    key <- getKey

    -- clear screen
    putStrLn "\ESC[2J\ESC[1;1H"
    
    -- check arrow keys
    case key of
        "\ESC[A" -> putStrLn "Up" >> run
        "\ESC[B" -> putStrLn "Down" >> run
        "\ESC[C" -> putStrLn "Left" >> run
        "\ESC[D" -> putStrLn "Right" >> run
        "q" -> return ()
        _ -> run

main :: IO ()
main = do
    hSetBuffering stdin NoBuffering
    putStrLn "\ESC[2J\ESC[1;1H"
    run

