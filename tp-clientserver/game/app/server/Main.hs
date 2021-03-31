{-# LANGUAGE OverloadedStrings #-}

import qualified Data.Text as T
import qualified Network.WebSockets as WS

import Control.Concurrent
import Control.Exception (finally)

import Model
import Net

type Var = MVar Model

main :: IO ()
main = do
    model <- newMVar newModel
    WS.runServer "0.0.0.0" 9000 (serverApp model)

serverApp :: Var -> WS.PendingConnection -> IO ()
serverApp var pc = do
    conn <- WS.acceptRequest pc
    iConn <- modifyMVar var (return . addInModel conn)
    WS.withPingThread conn 30 (return ())
        (finally (handleConn var iConn conn) (handleQuit var iConn))

handleConn :: Var -> Int -> WS.Connection -> IO ()
handleConn var iConn conn = do
    msg <- T.unpack . WS.fromDataMessage <$> WS.receiveDataMessage conn
    modifyMVar_ var (return . upModel msg iConn)
    broadcastGame var
    handleConn var iConn conn

broadcastGame :: Var -> IO ()
broadcastGame var = 
    withMVar var $ \model -> 
        let msg = T.pack $ show $ _game model
        in mapInNet (\c -> WS.sendTextData c msg) (_net model)

handleQuit :: Var -> Int -> IO ()
handleQuit var iConn = modifyMVar_ var (return . rmInModel iConn)

