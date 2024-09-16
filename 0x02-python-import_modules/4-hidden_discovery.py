#!/usr/bin/python3
import marshal
import types


def main():
    # Load the compiled module
    with open('hidden_4.pyc', 'rb') as f:
        # Skip the header and read the code object
        f.seek(16)  # Skip the header of the .pyc file
        code = marshal.load(f)

    # Create a module object from the code
    module = types.ModuleType('hidden_4')
    exec(code, module.__dict__)

    # Get all names from the module that do not start with '__'
    names = [name for name in dir(module) if not name.startswith('__')]

    # Print names in alphabetical order
    for name in sorted(names):
        print(name)


if __name__ == "__main__":
    main()
