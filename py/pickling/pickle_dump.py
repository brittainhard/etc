import pickle
import datetime
from pprint import pprint


class Potato:

    def __init__(self, potato):
        self.potato = potato

    def print_potato(self):
        print(datetime)
        pprint(self.potato)


a = Potato("potato")
pickle.dump(a, open("saved.p", "wb"))
