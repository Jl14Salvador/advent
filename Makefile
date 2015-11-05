CC=g++
CFLAGS=-Wall -g -std=c++11
OBJS= main.cpp Actions.o Items.o Player.h Character.o Enviros.h Enviros.h Forest.cc Village.cc Cave.cc Castle.cc
PROGRAM=advent

.PHONY: all
all: $(PROGRAM)

$(PROGRAM): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# default rule for compiling .cc to .o
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< ${INCLUDE}

## generate the prerequistes and append to the desired file
##.prereq : $(OBJS:.o=.cpp) $(wildcard *.h) Makefile
##	rm -f .prereq
##	$(CC) $(CCFLAGS) -MM $(OBJS:.o=.cpp) >> ./.prereq 

     ## include the generated prerequisite file
  ##   include .prereq

.PHONY: clean
clean:
	rm -rf *~ *.o

.PHONY: clean-all
clean-all: clean
	rm -rf $(PROGRAM)
	
run: $(PROGRAM)
	$(PROGRAM)
	
memcheck: $(PROGRAM)
	valgrind --leak-check=yes $(PROGRAM)
