class InterfaceMeta(type):

    def __new__(cls, names, bases, attrs):
        if not attrs.get("salad", None):
            attrs["salad"] = "salad"
        return super(InterfaceMeta, cls).__new__(cls, names, bases, attrs)


class Interface(object):
    __metaclass__ = InterfaceMeta

    def __init__(self, potato):
        self.potato = potato


def test_meta():
    a = Interface("1")
    assert a.salad
