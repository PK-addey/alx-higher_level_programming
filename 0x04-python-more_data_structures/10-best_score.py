#!/usr/bin/python3
def best_score(a_dictionary):
    if not a_dictionary:  # If the dictionary is None or empty, return None
        return None
    # Get the key with the highest value
    return max(a_dictionary, key=a_dictionary.get)
