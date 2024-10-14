#!/usr/bin/python3
"""Module for Square class."""

Rectangle = __import__('9-rectangle').Rectangle


class Square(Rectangle):
    """A subclass representing a square."""

    def __init__(self, size):
        """Constructor to validate size and initialize the square."""
        self.integer_validator("size", size)
        self.__size = size
        super().__init__(size, size)

    def area(self):
        """Method to return the area of the square."""
        return self.__size ** 2

    def __str__(self):
        """Return string representation of the square."""
        return "[Square] " + str(self.__size) + "/" + str(self.__size)
