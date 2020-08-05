module Game where

data Player = Player
    { _id :: Int
    , _msg :: String
    } deriving (Show)

data Game = Game
    { _players :: [Player]
    } deriving (Show)

newGame :: Game
newGame = Game []

-- TODO vérifier que l'identifiant est unique ?
addPlayer :: Int -> Game -> Game
addPlayer i g = g { _players = ps1 }
    where ps1 = Player i "" : _players g

rmPlayer :: Int -> Game -> Game
rmPlayer i g = g { _players = ps1 }
    where ps1 = filter ((i /=) . _id) (_players g)

upPlayer :: String -> Int -> Game -> Game
upPlayer msg i g = g { _players = ps1 }
    where 
        ps1 = map update (_players g)
        update p = if i /= _id p then p else p { _msg = msg }

