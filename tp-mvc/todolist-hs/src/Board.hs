module Board where

-- import Data.List (partition)
import Task

data Board = Board
    { _boardId :: Int
    , _boardTodo :: [Task]
    , _boardDone :: [Task]
    }

newBoard :: Board
newBoard = Board 1 [] []

{- 
addTodo :: String -> Board -> (Int, Board)
addTodo str (Board i ts ds) = 
    -- TODO

toDone :: Int -> Board -> Board
toDone i0 (Board _i ts ds) = 
    -- TODO
-}

