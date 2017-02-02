comp1 = [x * 2 | x <- [1..10]]
-- | Elements, which doubled, are greater than equal to 12
twelve = [x * 2 | x <- [1..10], x * 2 >= 12]
-- | Filtering
modThree = [x | x <- [50..100], x `mod` 7 == 3]
-- | Last part is the predicate
boomBangs xs = [if x < 10 then "BOOM!" else "BANG!" | x <- xs, odd x]
-- | Several predicates
preddy = [x | x <- [10..20], x /= 13, x /= 15, x /= 19]
combo = [x * y | x <- [22, 12],
                 y <- [8, 9, 10, 11],
                 x * y > 50]

-- | Lists of strings
nouns = ["hobo", "frog", "pope"]
adjectives = ["lazy", "grouchy", "schemeing"]
names = [x ++ " " ++ y | x <- nouns, y <- adjectives]

-- | Weird stuff
length' xs = sum [1 | _ <- xs]
noUpperCase st = [c | c <- st, c `elem` ['A'..'Z']]
