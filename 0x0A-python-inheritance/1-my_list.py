#!/usr/bin/python3
"""Module that defines the MyList class."""


class MyList(list):
    """Custom list class that inherits from the built-in list."""
    def print_sorted(self):
        """
        Prints the list in ascending order without modifying
        the original list.
        """
        print(sorted(self))
