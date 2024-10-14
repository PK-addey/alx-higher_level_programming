#!/usr/bin/python3
"""
Module that defines the BaseGeometry class with an area method.
"""


class BaseGeometry:
    """
    A BaseGeometry class with an area method that raises an exception.
    """
    def area(self):
        """
        Method to compute the area of the geometry.

        Raises:
            Exception: if the method is not implemented by the subclass.
        """
        raise Exception("area() is not implemented")
