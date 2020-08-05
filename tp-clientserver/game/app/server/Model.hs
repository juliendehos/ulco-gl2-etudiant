module Model where

import qualified Network.WebSockets as WS

import Game
import Net

data Model = Model
    { _net :: Net WS.Connection
    , _game :: Game
    }

newModel :: Model
newModel = Model newNet newGame

addInModel :: WS.Connection -> Model -> (Model, Int)
addInModel conn (Model net0 game0) =
    let (net1, i) = addConn conn net0
        game1 = addPlayer i game0
    in (Model net1 game1, i)

rmInModel :: Int -> Model -> Model
rmInModel iConn (Model net0 game0) =
    let net1 = rmConn iConn net0
        game1 = rmPlayer iConn game0
    in Model net1 game1

upModel :: String -> Int -> Model -> Model
upModel msg iConn m = m { _game = g1 }
    where g1 = upPlayer msg iConn (_game m)

