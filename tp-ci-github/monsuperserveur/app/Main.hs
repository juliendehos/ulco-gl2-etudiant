{-# LANGUAGE OverloadedStrings #-}

import Data.Maybe (fromMaybe)
import Lib
import Lucid
import System.Environment (lookupEnv)
import Web.Scotty

main :: IO ()
main = do

    port <- read . fromMaybe "3000" <$> lookupEnv "PORT"
    
    scotty port $ do
    
        get "/" $ html $ renderText $ do
            doctype_
            html_ $ do
                head_ $ do
                    meta_ [charset_ "utf-8"]
                    title_ "monsuperserveur"
                body_ $ do
                    h1_ "monsuperserveur"
                    p_ $ a_ [href_ "/mul2/21"] "try /mul2/21"

        get "/mul2/:n" $ do
            n <- read <$> captureParam "n"
            json $ mul2 (n :: Int)

