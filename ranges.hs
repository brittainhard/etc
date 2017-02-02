{-| These ranges depend on patterns. If your range doesnt represent some
-}
twenty = [1 .. 20]
partial = [2, 4 .. 20]
-- | Floats are weird.
floats = [0.1, 0.3 .. 1]
-- |Cyclin!
cy = take 10 (cycle [1, 2, 3])
rep = replicate 3 10
