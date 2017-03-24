"""
So apparently this is polymorphism. Each subclass implements its own _points
method.

Polymorphism means: the condition of occuring in several different forms.
"""
class Card:

    def __init__(self, rank, suit):
        self.rank = rank
        self.suit = suit
        self.hard, self.soft = self._points()


class NumberCard(Card):

    def _points(self):
        return int(self.rank), int(self.rank)


class AceCard(Card):

    def _points(self):
        return 1, 11


class FaceCard(Card):

    def _points(self):
        return 10, 10
