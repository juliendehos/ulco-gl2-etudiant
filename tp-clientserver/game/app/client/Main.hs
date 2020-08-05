{-# LANGUAGE OverloadedStrings #-}

import qualified Data.Text.IO as T
import qualified Network.WebSockets as WS

import Control.Concurrent (forkIO)

main :: IO ()
main = WS.runClient "0.0.0.0" 9000 "" $ \conn -> do
    _ <- forkIO $ handleInput conn
    handleConn conn

handleConn :: WS.Connection -> IO ()
handleConn conn = do
    msgFromSrv <- WS.receiveDataMessage conn
    T.putStrLn $ WS.fromDataMessage msgFromSrv
    handleConn conn

handleInput :: WS.Connection -> IO ()
handleInput conn = do
    msg <- T.getLine
    WS.sendTextData conn msg
    handleInput conn

