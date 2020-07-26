{-# LANGUAGE ForeignFunctionInterface #-}

import Foreign.C.Types

foreign import ccall "mymath.h mul2"
    c_mul2 :: CInt -> CInt

hs_mul2 :: Int -> Int
hs_mul2 = fromIntegral . c_mul2 . fromIntegral

main :: IO ()
main = do
    putStrLn "this is myapp"
    print $ hs_mul2 21

