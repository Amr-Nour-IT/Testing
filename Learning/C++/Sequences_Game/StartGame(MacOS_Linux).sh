#!/bin/bash

# Check if the source file exists
SOURCE_FILE="/home/an/Documents/Learn/Sequences_Game/Source.cpp"
if [[ ! -f "$SOURCE_FILE" ]]; then
    echo "Source.cpp not found!"
    exit 1
fi

# Remove old executable if it exists
if [[ -f "Source.out" ]]; then
    rm Source.out
fi

# Compile the source file
g++ "$SOURCE_FILE" -o Source.out

# Check if compilation was successful
if [[ $? -ne 0 ]]; then
    echo "Compilation failed!"
    exit 1
fi

# Run the compiled program
./Source.out

# Keep the terminal open
echo "Press any key to exit..."
read -n 1 -s
