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
gcc filename.c -o program_name
```

For complex programs, you can use `-g` flag to generate debugging information.
`-O` flag can be used to optimize the executable file (`-O2`, `-O3` denotes
various levels of optimization).

Compiler (GCC/Clang) flags for warnings: `-Wall`, `-Wextra`, `-Wpedantic`,
`-Wunused`.

## Tools
### Cppcheck
```console
apt install cppcheck
cppcheck --enable=all filename.cpp 
```

## Resources
- <https://git.savannah.nongnu.org/cgit/c-intro-and-ref.git>
- <https://www.gnu.org/software/libc/manual/html_node/index.html>
