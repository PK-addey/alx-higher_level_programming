#!/usr/bin/python3
number = 98
try:
    print(f"{number} Battery street")
except TypeError:
    print(f"Error: {type(number).__name__} type is not supported")
