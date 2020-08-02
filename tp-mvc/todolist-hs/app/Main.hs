import Board
import View

-- import Text.Read (readMaybe)

loop :: Board -> IO ()
loop b = do
    putStrLn ""
    printBoard b
    -- TODO

main :: IO ()
main = loop newBoard

