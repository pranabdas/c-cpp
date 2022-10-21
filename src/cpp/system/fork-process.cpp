#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    pid_t child;
    int status;

    cout << "Main process PID: " << getpid() << endl;
    cout << "PID of main parent process: " << getppid() << endl;

    // fork a child process. fork() is a system call. The child process and the
    // parent process run concurrently. New process created by fork() is a copy
    // of the parent process except different return values. Both child and
    // parent process will start executing instruction followed by fork().
    // Variables initialized before fork() will be same in both processes.
    child = fork();

    // everything below will run on both parent and child process
    // depending on the fork() return value, we can run task under child or parent
    // however, there is no guaranty which result will be printed first
    
    if (child == -1) // fork() returns -1 on failure
    {
        cout << "fork() failed to create child process." << endl;
        return (-1);
    }
    else if (child == 0) // fork() returns 0 and handles control the child process
                         // this block will execute under child process
    {
        cout << "I am the child process, PID : " << getpid() << endl;
        cout << "My parent's PID : " << getppid() << endl;

        if (execl("/usr/bin/ls", "ls", "-l", NULL) < 0)
        {
            cout << "execl failed!" << endl;
            return 2;
        }
    }
    else // fork() returns PID of child and handles control to the parent
         // this block will execute under parent process
    {
        wait(&status); // parent has no work to do, just wait for the child
                       // process to finish
    }

    return 0;
}
