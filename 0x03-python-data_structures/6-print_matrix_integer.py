#!/usr/bin/python3


def print_matrix_integer(matrix=[[]]):
    """Prints a matrix of integers, one integer per line."""
    if not matrix or not matrix[0]:
        print()
        return

    for row in matrix:
        print(" ".join("{:d}".format(num) for num in row))
