# Programming in C and C++

Learning C and C++ languages.

Compile:
```console
gcc filename.c
g++ filename.cpp
```
This would produce executable with default name `a.out`. You can specify the
executable name by using the `-o` flag:
```console
gcc filename.c -o program.o
```

Compiler (GCC/Clang) flags for warnings: `-Wall`, `-Wextra`, `-Wpedantic`,
`-Wunused`.

**Warning:** Certain codes are compiler dependent, and may throw errors.

## Tools
### Cppcheck
```console
apt install cppcheck

cppcheck --enable=all filename.cpp 
```

