#!/usr/bin/python3


def delete_at(my_list=[], idx=0):
    """
    Deletes an element at a specific position in a list.
    Args:
        my_list (list): The list from which to delete an element.
        idx (int): The index of the element to delete.
    Returns:
        list: The list after deleting the element.
    """
    if 0 <= idx < len(my_list):
        return my_list[:idx] + my_list[idx+1:]
    return my_list
