#!/bin/bash

# Collect all .c files in the current directory
c_files=$(find . -maxdepth 1 -type f -name "*.c")

# Compile each .c file into corresponding .o file
for file in $c_files; do
    object_file="${file%.c}.o"
    gcc -c "$file" -o "$object_file"
done

# Create the static library using ar
ar rcs liball.a *.o

# Clean up object files
rm -f *.o

