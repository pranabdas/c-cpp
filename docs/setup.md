---
title: Setting up C/C++ compiler
sidebar_label: Setup
slug: /
keywords: ["C programming", "C++ programming", "scientific programming", "numerical programming", "numerical integration"]
---
I will be using GNU C Compiler (GCC) to compile codes in a Linux computer. You
can install GCC in Ubuntu/Debian by:

```bash
apt install gcc
```

Command to compile:
```bash
gcc filename.c

# linking math lib
gcc filename.c -lm

# show all compiler warnings
gcc -Wall filename.c

g++ filename.cpp
```

This would produce executable with default name `a.out`. You can specify the
executable name by using the `-o` flag:
```bash
gcc filename.c -o program_name
```

For complex programs, you can use `-g` flag to generate debugging information.
`-O` flag can be used to optimize the executable file (`-O2`, `-O3` denotes
various levels of optimization).

Compiler (GCC/Clang) flags for warnings: `-Wall`, `-Wextra`, `-Wpedantic`,
`-Wunused`.

### Cppcheck

Sometimes I will be using `cppcheck` to debug codes as well.

```bash
apt install cppcheck
cppcheck --enable=all filename.cpp 
```