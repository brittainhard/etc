__all__ = ["club", "diamond", "heart", "spade"]


HEART_SYMBOL = u'\u2661'
DIAMOND_SYMBOL = u'\u2662'
CLUB_SYMBOL = u'\u2663'
SPADE_SYMBOL = u'\u2664'


class Suit:

    def __init__(self, name, symbol):
        self.name = name
        self.symbol = symbol


club = Suit("Club", CLUB_SYMBOL)
diamond = Suit("Diamond", DIAMOND_SYMBOL)
heart = Suit("Heart", HEART_SYMBOL)
spade = Suit("Spade", SPADE_SYMBOL)
