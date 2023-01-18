CC=g++
CFLAGS=-O3 -Wall

# By default the left-hand-side of the first dependency is what you
# get if you just type `make` with no arguments, in this case `make all`
all: hello

# commands must be indented with TAB not spaces
# If you need to repair a Makefile that uses spaces, one way of converting
# leading spaces into TABs is to use the unexpand program:
# mv Makefile Makefile.old
# unexpand Makefile.old > Makefile
# $@ = target
# $^ = dependencies
# ${CC} -o hello hello.o
hello: hello.o
	$(CC) $(CFLAGS) -o $@ $^

# ${CC} -c 00-hello-world.cpp -o hello.o
# $(CC) $(CFLAGS) -o $@ -c $^
hello.o: 00-hello-world.cpp
	$(CC) $(CFLAGS) -o $@ -c $^

# The $(RM) variable is predefined to "rm -f"
clean:
	$(RM) hello *.o
