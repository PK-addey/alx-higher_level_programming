#!/usr/bin/python3
import sys


def main():
    # Get all arguments excluding the script name
    args = sys.argv[1:]

    # Initialize the sum
    total_sum = 0

    # Add each argument to the sum
    for arg in args:
        total_sum += int(arg)

    # Print the result
    print(total_sum)


if __name__ == "__main__":
    main()
