#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <iostream>

#ifdef _WIN32
#include <Windows.h> // includes system sleep() from Windows
#else
#include <unistd.h> // includes unix/linux sleep()
#endif

using std::cout;
using std::endl;

void forever();

int main()
{
    pid_t child;
    child = fork();

    if (child == -1)
    {
        cout << "fork() failed to create child process." << endl;
        return (-1);
    }
    else if (child == 0)
    {
        cout << "Running forever in child process\n";
        forever();
    }
    else
    {
        cout << "Parent process stopping child (PID: " << child
             << ") after 1 sec.\n";
        sleep(1);
        int status = kill(child, 9);
        // kill signals:
        //  1 = HUP (hangup)
        //  2 = INT (interrupt)
        //  3 = QUIT (quit)
        //  6 = ABRT (abort)
        //  9 = KILL (non-catchable, non-ignorable kill)
        // 14 = ALRM (alarm clock)
        // 15 = TERM (software termination signal)

        if (status == 0)
        {
            cout << "child process killed successfully.\n";
        }
        else
        {
            cout << "There was problem killing process " << child << endl;
        }
    }

    return 0;
}

void forever()
{
    while (true)
        ;
}
