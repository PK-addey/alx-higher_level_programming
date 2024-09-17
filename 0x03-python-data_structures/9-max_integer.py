#!/usr/bin/python3


def max_integer(my_list=[]):
    """
    Finds the biggest integer in a list.
    If the list is empty, returns None.
    Args:
        my_list (list): The list of integers.
    Returns:
        None if the list is empty.
    """
    if not my_list:
        return None
    biggest = my_list[0]
    for number in my_list[1:]:
        if number > biggest:
            biggest = number
    return biggest
