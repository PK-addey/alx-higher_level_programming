#!/usr/bin/python3
def simple_delete(a_dictionary, key=""):
    # Check if the key exists in the dictionary
    if key in a_dictionary:
        # Remove the key-value pair
        del a_dictionary[key]
    # Return the modified dictionary
    return a_dictionary
