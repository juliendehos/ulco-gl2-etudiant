module View where
    
import Board
import Task

showTask :: Task -> String
showTask t = show (_taskId t) ++ ". " ++ (_taskName t)

printBoard :: Board -> IO ()
printBoard b = do
    putStrLn "TODO"

