#!/usr/bin/python3


def multiple_returns(sentence):
    """
    first character.
    If the string is empty, the first character is None.
    Args:
        sentence (str): The input string.
    Returns:
        its first character.
    """
    if sentence:
        return (len(sentence), sentence[0])
    else:
        return (0, None)
