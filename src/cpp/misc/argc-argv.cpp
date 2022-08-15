#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
    cout << "Program: " << argv[0] << endl;
    cout << "You have provided " << argc - 1 << " arguments\n";

    if (argc > 1)
    {
        cout << "Arguments are:\n";

        for (int i = 1; i < argc; i++)
        {
            cout << "arg[" << i << "] : " << argv[i] << endl;
        }
    }

    // Note that the arguments are string
    // They have to be converted to other data type as necessary
    // for example we can use `<cstdlib>` `atoi` to convert string to int

    int max = atoi("100");
    max += 10;

    cout << max << endl;
    
    return 0;
}
