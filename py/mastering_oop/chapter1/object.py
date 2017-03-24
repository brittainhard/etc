class X:
    pass

class Y(X):
    pass

# Class 'type'
print(X.__class__)
# Same thing as __class__, looks like __class__ is python 3.
print(type(X))

# Base class for this class is `object`, since inhereting from object is implicit in python 3.
print(X.__class__.__base__)
