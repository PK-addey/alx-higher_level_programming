#!/usr/bin/python3
"""Module for lookup method."""


def lookup(obj):
    """
    Returns a list of available attributes and methods of an object.


    :param obj: The object to inspect
    :return: List of attributes and methods of the object
    """
    return dir(obj)
