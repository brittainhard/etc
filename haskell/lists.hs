lostNumbers = [4,8,15,16,23,42] ++ [1, 1, 1, 1]
added = 5:[1, 2, 3, 4]
otherList = 1:2:3:[]
aCat = 'A':" small cat."
-- |By index, use !!
steve = "Steve Buscemi" !! 0

-- | Logical operations
a = [1, 2, 3] > [2, 3, 4, 5]

-- | Nested Lists
b = [[1,2,3,4],[5,3,3,3],[1,2,2,3,4],[1,2,3]]
c = [6, 6, 6]:b

d = head [5, 4, 3, 2, 1]
e = tail [5, 4, 3, 2, 1]
f = last [5, 4, 3, 2, 1]
g = init [5, 4, 3, 2, 1]
h = minimum [5, 4, 3, 2, 1]

pro = product [1, 2, 3, 4]
rev = product [4, 3, 2, 1]

isIn = 4 `elem` [1, 2, 3, 4]

