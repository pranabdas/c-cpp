#include <unistd.h>
#include <sys/stat.h>
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    pid_t daemon;
    int status;

    umask(0); // clear file permissions. when a child process is created, it
              // inherits the file permissions of the parent process, we want
              // to reset it
    daemon = fork();
    if (daemon == -1)
    {
        cout << "fork() failed.\n";
        return (-1);
    }
    else if (daemon == 0)
    {
        setsid(); // creates new session, this makes:
                  // (1) the child process session leader,
                  // (2) child process becomes leader of process group,
                  // (3) it gets disassociated from its controlling terminal
                
        if (chdir("/tmp") < 0) // parent process might not run in a temporary
                               // path, it's a good idea to set the working 
                               // directory to meet long term expectation
        {
            cout << "Could not change directory to '/tmp'\n";
        }

        // attach daemon specific task
        sleep(10);

        // since the daemon service is not associated with any terminal device
        // it is good practice to redirect standard input, output, and error to
        // `/dev/null`
    }

    return 0; // main program exits after creating fork
}