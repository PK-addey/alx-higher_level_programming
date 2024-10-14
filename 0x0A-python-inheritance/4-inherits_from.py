#!/usr/bin/python3
"""Module that defines the inherits_from function."""


def inherits_from(obj, a_class):
    """
    Determines if an object is a true subclass of a class.

    Args:
        obj: The object to be checked.
        a_class: The class to check against.

    Returns:
        True if obj is a true subclass of a_class, otherwise False.
    """
    return isinstance(obj, a_class) and type(obj) != a_class
