import Data.JSString as S

foreign import javascript unsafe
    "myp.innerHTML = ($1)" set_myp :: S.JSString -> IO ()

main :: IO ()
main = set_myp (S.pack "haskell has been here")

