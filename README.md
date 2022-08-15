# Programming in C and C++

Learning C and C++ languages.

Compile:
```console
gcc filename.c

# linking math lib
gcc filename.c -lm

# show all compiler warnings
gcc -Wall filename.c

g++ filename.cpp
```
This would produce executable with default name `a.out`. You can specify the
executable name by using the `-o` flag:
```console
gcc filename.c -o program.o
```

Compiler (GCC/Clang) flags for warnings: `-Wall`, `-Wextra`, `-Wpedantic`,
`-Wunused`.

## Tools
### Cppcheck
```console
apt install cppcheck
cppcheck --enable=all filename.cpp 
```
