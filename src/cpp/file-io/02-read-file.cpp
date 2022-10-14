#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // ifstream is used to read from file
    ifstream fp_in{"data.txt"};
    // ifstream fp_in{"data.txt", ios::in};
    if (!fp_in)
    {
        cerr << "File could not be opened for reading!\n";
        return 1;
    }

    while (fp_in)
    {
        string input_string;
        getline(fp_in, input_string);
        cout << input_string << endl;
    }

    fp_in.close();
    return 0;
}
