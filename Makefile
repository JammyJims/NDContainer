# C++ Compiler
CXX:=clang++

# Directories
SRCDIR:=./src/
BUILDDIR:=./build/
INCLUDEDIR:=./include/
BINDIR:=./bin/

# Flags
INC:= -I $(INCLUDEDIR) -I $(SRCDIR)
DFLAGS:=-g -Wall -Wextra -std=c++11
CFLAGS:= $(DFLAGS) $(INC)

driver: driver.o
	$(CXX) $(CFLAGS) -o $(BINDIR)driver.out $(BUILDDIR)driver.o
	
test: test.o
	$(CXX) $(CFLAGS) -o $(BINDIR)test.out $(BUILDDIR)test.o
	





driver.o: 
	$(CXX) $(CFLAGS) -c -o $(BUILDDIR)driver.o driver.cpp 
	
test.o: NDContainer.o
	$(CXX) $(CFLAGS) -c -o $(BUILDDIR)test.o test.cpp $(BUILDDIR)NDContainer.o 
	
clean:
	rm -f $(BUILDDIR)*.o $(BINDIR)*.out
    

