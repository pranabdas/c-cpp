CC = g++

all: hello

hello: hello.o
    ${CC} -o hello hello.o

hello.o: 00-hello-world.cpp
    ${CC} -c 00-hello-world.cpp -o hello.o

clean:
    rm hello.o hello
