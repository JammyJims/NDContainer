# C++ Compiler
CXX:=clang++

# Directories
SRCDIR:=./src/
BUILDDIR:=./build/
INCLUDEDIR:=./include/
BINDIR:=./bin/

# Flags
INC:= -I $(INCLUDEDIR)
DFLAGS:=-g -Wall -Wextra
CFLAGS:= $(DFLAGS) $(INC)

driver: driver.o
	$(CXX) $(CFLAGS) -o $(BINDIR)driver.out $(BUILDDIR)driver.o
	
test: test.o
	$(CXX) $(CFLAGS) -o $(BINDIR)test.out $(BUILDDIR)test.o
	
	
	
	
	
	
driver.o: NDContainer.o
	$(CXX) $(CFLAGS) -c -o $(BUILDDIR)driver.o driver.cpp $(BUILDDIR)NDContainer.o
	
test.o: NDContainer.o
	$(CXX) $(CFLAGS) -c -o $(BUILDDIR)test.o test.cpp $(BUILDDIR)NDContainer.o 
	
NDContainer.o:
	$(CXX) $(CFLAGS) -c -o $(BUILDDIR)NDContainer.o $(SRCDIR)NDContainer.cpp 
	
clean:
	rm -f $(BUILDDIR)*.o $(BINDIR)*.out
    

