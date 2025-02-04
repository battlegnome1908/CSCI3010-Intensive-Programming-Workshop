# This is a make file with three targets:
#  1. "make all" - compiles main
#  2. "make clean" - removes .o files
#  3. "./main" - runs the program

# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Werror -Wpedantic

# Build the main program
all: main

# Clean up all object files and executables
clean:
	rm -f *.o main test

# Build the main program
main: main.o functions_to_implement.o
	$(CXX) $(CXXFLAGS) main.o functions_to_implement.o -o main

# Compile main.o from main.cpp
main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

# Compile functions_to_implement.o from functions_to_implement.cpp
functions_to_implement.o: functions_to_implement.cpp
	$(CXX) $(CXXFLAGS) -c functions_to_implement.cpp

# Build the test program
test: test.o functions_to_implement.o
	$(CXX) $(CXXFLAGS) -Iinclude test.o functions_to_implement.o -o test

# Compile test.o from test.cpp
test.o: test.cpp
	$(CXX) $(CXXFLAGS) -Iinclude -c test.cpp

# Run the test program
run_tests: test
	./test

# Run the main program
run: main
	./main
