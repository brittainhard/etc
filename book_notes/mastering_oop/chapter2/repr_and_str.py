class Potato:
    def __init__(self, potato, apple):
        self.potato = potato
        self.apple = apple

    def __repr__(self):
        """This is what shows up when you try to investigate what something is,
        for example, when you are debugging."""
        return "%s (apple=%s, potato=%s)" % (self.__class__.__name__, self.potato, self.apple)

    def __str__(self):
        """This is what shows up when you print something."""
        return "Potato"

potato = Potato(1, 2)
print(potato)
