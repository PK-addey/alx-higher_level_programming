#!/usr/bin/python3
"""Rectangle class with area method."""

from models.base import Base


class Rectangle(Base):
    """
    Rectangle class with width, height, x and y attributes.

    Attributes:
        __width (int): Private instance attribute for width.
        __height (int): Private instance attribute for height.
        __x (int): Private instance attribute for x-coordinate.
        __y (int): Private instance attribute for y-coordinate.
    """

    def __init__(self, width, height, x=0, y=0, id=None):
        """
        Initializes the Rectangle object.

        Args:
            width (int): Rectangle width.
            height (int): Rectangle height.
            x (int, optional): x-coordinate. Defaults to 0.
            y (int, optional): y-coordinate. Defaults to 0.
            id (int, optional): Unique identifier. Defaults to None.
        """
        super().__init__(id)
        self.width = width
        self.height = height
        self.x = x
        self.y = y

    @property
    def width(self):
        """Gets the width attribute."""
        return self.__width

    @width.setter
    def width(self, value):
        """Sets the width attribute after validation."""
        self.validate("width", value)
        self.__width = value

    @property
    def height(self):
        """Gets the height attribute."""
        return self.__height

    @height.setter
    def height(self, value):
        """Sets the height attribute after validation."""
        self.validate("height", value)
        self.__height = value

    @property
    def x(self):
        """Gets the x attribute."""
        return self.__x

    @x.setter
    def x(self, value):
        """Sets the x attribute after validation."""
        self.validate_x_y("x", value)
        self.__x = value

    @property
    def y(self):
        """Gets the y attribute."""
        return self.__y

    @y.setter
    def y(self, value):
        """Sets the y attribute after validation."""
        self.validate_x_y("y", value)
        self.__y = value

    @staticmethod
    def validate(name, value):
        """Validates integer and positivity."""
        if not isinstance(value, int):
            raise TypeError(f"{name} must be an integer")
        if value <= 0:
            raise ValueError(f"{name} must be > 0")

    @staticmethod
    def validate_x_y(name, value):
        """Validates integer and non-negativity for x and y."""
        if not isinstance(value, int):
            raise TypeError(f"{name} must be an integer")
        if value < 0:
            raise ValueError(f"{name} must be >= 0")

    def area(self):
        """
        Calculates the area of the Rectangle instance.

        Returns:
            int: Rectangle area.
        """
        return self.width * self.height

    def display(self):
        """
        Prints the Rectangle instance using '#' character.
        """
        for _ in range(self.height):
            print('#' * self.width)

    def __str__(self):
        """Return a string representation of the rectangle."""
        return "[Rectangle] ({}) {}/{} - {}/{}".format(
            self.id, self.x, self.y, self.width, self.height
        )

    def display(self):
        """
        Prints the Rectangle instance using '#' character,
        considering x and y offsets.
        """
        for i in range(self.y):
            print()

        for i in range(self.height):
            print(" " * self.x + "#" * self.width)
