import qualified Graphics.Gloss as G
import qualified Graphics.Gloss.Interface.IO.Interact as G

import Model

displayH :: Model -> G.Picture
displayH (Model (i,j) board) = 
    let toPic k = 20 * (fromIntegral k) - 90
        rectPic = G.rectangleSolid 20 20
        playerPic = G.Color G.white $ G.Translate (toPic j) (toPic i) rectPic
    in G.Pictures [playerPic]

eventH :: G.Event -> Model -> Model
eventH (G.EventKey (G.SpecialKey G.KeyLeft)  G.Down _ _) m = tryGoLeft m
eventH _ m = m

idleH :: Float -> Model -> Model
idleH _ = id

main :: IO ()
main = do
    let myWindow = G.InWindow "naze" (200, 200) (0, 0)
    G.play myWindow G.black 30 newModel displayH eventH idleH

