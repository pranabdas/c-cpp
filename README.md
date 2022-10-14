<h1 align="center">Programming in C and C++</h1>

<p align="center">
  <a href="https://github.com/pranabdas/c-cpp/actions/workflows/deploy-gh-pages.yml"><img src="https://github.com/pranabdas/c-cpp/actions/workflows/deploy-gh-pages.yml/badge.svg" alt="Deploy gh-pages status"></a>
</p>

Follow the tutorial here - <https://pranabdas.github.io/c-cpp/>

## Quick start

Compile:
```console
gcc filename.c

# linking math lib
gcc filename.c -lm

# show all compiler warnings
gcc -Wall filename.c

g++ filename.cpp

# specify certain standard
g++ -std=c++17 filename.cpp
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
- <https://developers.google.com/edu/c++/cpp-in-depth>
