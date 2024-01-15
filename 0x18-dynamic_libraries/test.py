#!/usr/bin/python3

from ctypes import CDLL

# Load the shared library
lib = CDLL('./100-operations.so')  # Assuming the library is in the same directory

# Call the C function
result = getattr(lib, 'add')(3, 4)

# Print the result
print(f"The result of adding 3 and 4 is: {result}")

