#!/usr/bin/python3
"""
Module defines BaseGeometry class with area and integer_validator methods.
"""


class BaseGeometry:
    """
    A BaseGeometry class with methods to compute the area and
    validate integers.
    """
    def area(self):
        """
        Method to compute the area of the geometry.

        Raises:
            Exception: if the method is not implemented by the subclass.
        """
        raise Exception("area() is not implemented")

    def integer_validator(self, name, value):
        """
        Method for validating the value as a positive integer.

        Args:
            name: The name of the parameter.
            value: The value to be validated.

        Raises:
            TypeError: if value is not an integer.
            ValueError: if value is less than or equal to 0.
        """
        if type(value) != int:
            raise TypeError("{} must be an integer".format(name))
        if value <= 0:
            raise ValueError("{} must be greater than 0".format(name))
