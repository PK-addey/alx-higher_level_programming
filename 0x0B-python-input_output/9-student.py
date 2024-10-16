#!/usr/bin/python3
"""Contains the class 'student'"""


class student:
    """Representation of a student"""
    def __init__(self, first_name, last_name):
        """Initializes the student"""
        self.first_name = first_name
        self.last_name = last_name
        self.age = age

    def to_json(self):
        """
        returns a dictionary representation of a student instance
        """
        return self.__dict__
