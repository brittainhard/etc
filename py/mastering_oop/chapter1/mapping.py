from cards import *


def mapping_get_card(rank, suit):
    # From this dictionary get the value associated with the number. Default is
    # number card if it aint in the dict. In this case I think that the mapping
    # is the object that the arguments are applied to.
    #
    # This is broken because it does not give the letter associated with that
    # card.
    class_ = {
        1: AceCard,
        11: FaceCard,
        12: FaceCard,
        13: FaceCard
    }.get(rank, NumberCard)
    return class_(rank, suit)


def two_parallell_mappings(rank, suit):
    """
    Add another mapping that solves the above problem. Pretty ugly but it works.
    Next one is mapping with tuple, which looks better.
    """
    class_ = {
        1: AceCard,
        11: FaceCard,
        12: FaceCard,
        13: FaceCard
    }.get(rank, NumberCard)
    rank_str = {
        11: 'J',
        12: 'Q',
        13: 'K'
    }.get(rank, str(rank))
    return class_(rank_str, suit)


def tuple_mapping(rank, suit):
    """
    Ugly, but better.
    """
    class_ = {
        1: (AceCard, 'A'),
        11: (FaceCard, 'J'),
        12: (FaceCard, 'Q'),
        13: (FaceCard, 'K')
    }.get(rank, (NumberCard, str(rank)))


deck = get_deck(tuple_mapping)
