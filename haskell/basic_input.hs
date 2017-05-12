main = do
    putStrLn "What is 2 + 2?"
    name <- readLn
    if name == 4
        then putStrLn "You're right!"
        else putStrLn "You're wrong!"
