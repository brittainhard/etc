"""
Going to contain a lot of examples of collection classes. No need to worry about
testing out the code. Only make sure that there are no syntactical errors? Nah,
add some tests for the hell of it.

There are three general strategies for designing collection objects.

1) Wrap:
    An existing kind of collection. Just providing methods on top of it.
2) Extend:
    Normal subclass definition. 
3) Invent:
   Making a collection from scratch.
"""
from suits import *
from subclass_init import *


# Wrapper example
class Deck:
    """The deck class now has its own implementation  of pop. """

    def __init__(self):
        self.cards = [get_card(r + 1, s) for r in range(13) for s in (Club,
            Diamond, Heart, Spade)]

    def pop(self):
        return self._cards.pop()

