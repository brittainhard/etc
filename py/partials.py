from functools import partial

def lag_hard(potato):
    a = []
    for x in range(10000):
        newlist = []
        for y in range(10000):
            newlist.append(y)
        a.append(newlist)

apple = partial(lag_hard, 5)
