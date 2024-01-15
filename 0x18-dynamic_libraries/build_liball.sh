#!/bin/bash

# Get a list of all .c files in the current directory
c_files=$(ls *.c 2>/dev/null)

if [ -z "$c_files" ]; then
    echo "No .c files found in the current directory."
    exit 1
fi

# Compile the .c files into object files
gcc -c -fPIC $c_files

# Create the dynamic library (liball.so) from the object files
gcc -shared -o liball.so *.o

# Clean up: remove the intermediate object files
rm -f *.o

echo "Dynamic library liball.so created successfully."

