##
# Project Title
#
# @file
# @version 0.1

.PHONY: all build run clean

# Default target: build project
all: build

# Run cmake configuration + build
build:
	cmake -S . -B build
	cmake --build build

# Run the program after building
run: build
	./build/bookstore

# Clean everything (remove build folder)
clean:
	rm -rf build

# end
