#!/usr/bin/python3
"""Module that defines the is_kind_of_class function."""


def is_kind_of_class(obj, a_class):
    """
    Checks if an object is an instance of a class or a subclass.

    Args:
        obj: The object to be checked.
        a_class: The class to check against.

    Returns:
        True if obj is an instance or subclass instance of a_class,
        otherwise False.
    """
    return isinstance(obj, a_class)
