#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <iostream>

using std::cout;
using std::endl;

int add(int, int);
int mult(int, int);

int main()
{
    pid_t child;
    int status;
    int a = 4;
    int b = 7;

    child = fork();

    if (child == -1)
    {
        cout << "fork() failed to create child process." << endl;
        return (-1);
    }
    else if (child == 0)
    {
        cout << "Child process:\n";
        cout << a << " + " << b << " = " << add(a, b) << endl;
    }
    else
    {
        cout << "Parent process:\n";
        cout << a << " * " << b << " = " << mult(a, b) << endl;
        wait(&status);
    }

    return 0;
}

int add(int a, int b)
{
    return (a + b);
}

int mult(int a, int b)
{
    return (a * b);
}
