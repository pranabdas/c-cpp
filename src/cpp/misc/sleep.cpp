#include <iostream>
#include <chrono>
#include <thread>

#ifdef _WIN32
#include <Windows.h> // includes system sleep() from Windows
#else
#include <unistd.h> // includes unix/linux sleep()
#endif

using namespace std;

int main()
{
    cout << "I'm waiting 2s...\n";
    // this blocks the execution of the current thread at least for
    // sleep_duration. The actual time could be longer duration than
    // sleep_duration due to scheduling activities or resource contention delays
    this_thread::sleep_for(chrono::milliseconds(2000) );
    cout << "...the wait is over\n";

    // using system sleep()
    cout << "Waiting again for 2 sec...\n";
    sleep(2);
    cout << "... done waiting\n";

    return 0;
}
