
module Model where

import Data.Array

type Ix2 = (Int, Int)
type Board = Array Ix2 Cell

data Cell = CellFree | CellWall | CellGoal
    deriving (Eq)

data Model = Model
    { _ij :: Ix2
    , _board :: Board
    }

getCell :: Board -> Ix2 -> Cell
getCell = (!)

cells0 :: [Cell]
cells0 = 
    [ CellFree, CellFree, CellFree, CellFree, CellFree, CellFree, CellFree, CellWall, CellWall, CellFree
    , CellWall, CellWall, CellWall, CellFree, CellWall, CellWall, CellFree, CellWall, CellWall, CellFree
    , CellFree, CellWall, CellFree, CellFree, CellFree, CellFree, CellFree, CellFree, CellFree, CellFree
    , CellFree, CellWall, CellFree, CellWall, CellWall, CellFree, CellWall, CellWall, CellFree, CellWall
    , CellFree, CellWall, CellFree, CellFree, CellWall, CellWall, CellWall, CellFree, CellFree, CellFree
    , CellFree, CellFree, CellFree, CellWall, CellWall, CellGoal, CellFree, CellFree, CellWall, CellWall
    , CellFree, CellWall, CellFree, CellWall, CellWall, CellWall, CellWall, CellFree, CellFree, CellFree
    , CellFree, CellWall, CellFree, CellFree, CellWall, CellFree, CellWall, CellFree, CellWall, CellFree
    , CellFree, CellWall, CellWall, CellFree, CellWall, CellFree, CellFree, CellFree, CellWall, CellFree
    , CellFree, CellGoal, CellFree, CellFree, CellWall, CellWall, CellWall, CellWall, CellWall, CellFree
    ]

newModel :: Model
newModel = Model (0,0) (listArray ((0,0),(9,9)) cells0)

tryGoLeft :: Model -> Model
tryGoLeft m =
    let (i0, j0) = _ij m
    in m { _ij = (i0+1, j0+1) } -- TODO

-- TODO

