#!/usr/bin/python3
number = input()
if number.isdigit() or (number[0] == '-' and number[1:].isdigit()):
    print(f"{int(number)} Battery street")
else:
    raise ValueError("Unknown format code 'd' for object of type 'str'")
