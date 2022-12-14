#include <iostream>
#include <cmath>
#include <cstdlib> // for EXIT_SUCCESS
using namespace std;

int main()
{
    int iter = 10'000'000;
    double test = 1.0;
    clock_t time_start = clock();

    for (int i = 0; i < iter; i++)
    {
        test = tan(atan(exp(log(sqrt(test * test))))) + 1.0;
    }
    clock_t time_finish = clock();

    cout << "No of iteration = " << iter << endl;
    cout << "test = " << test << endl;
    cout << "Relative accuracy = " << (test - (iter + 1)) / (iter + 1)
         << endl;
    cout << "Time taken = "
         << static_cast<double>(time_finish - time_start) / CLOCKS_PER_SEC
         << " seconds.\n";
    // the above gives the processor time, not the wall time

    return (EXIT_SUCCESS);
    // we do not need to know correct exit flag which is 0
    // use of EXIT_SUCCESS is more portable than using 0
}
