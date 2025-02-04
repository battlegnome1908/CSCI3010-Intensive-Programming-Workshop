# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Werror -Wpedantic

# Clean up all object files and executables
clean:
	rm -f *.o test

# Build the test program (this target will build the test executable)
test: test.o functions_to_implement.o
	$(CXX) $(CXXFLAGS) -o test test.o functions_to_implement.o  # Linking both object files

# Compile test.o from test.cpp
test.o: test.cpp
	$(CXX) $(CXXFLAGS) -c test.cpp  # Compile test.cpp to test.o

# Run the test program
run_tests: test
	./test

