#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    time_t now = time(0); // this returns the system epoch time
    cout << "Current system epoch time: " << now << endl;

    // convert epoch time to string form
    char *dt = ctime(&now);
    cout << "Current system time: " << dt; // seems this prints a newline

    // convert to tm struct for UTC
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "The UTC date and time is: " << dt;

    // format
    tm *ltm = localtime(&now);
    cout << "Date: " << ltm->tm_mday << "/" << ltm->tm_mon + 1 << "/"
         << ltm->tm_year + 1900 << endl;

    cout << "Time: " << ltm->tm_hour << ":"
         << ltm->tm_min << ":"
         << ltm->tm_sec << endl;

    return 0;
}
