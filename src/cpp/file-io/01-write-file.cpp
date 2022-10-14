#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // ofstream is used to write to file
    ofstream fp_out{"data.txt"};
    // ofstream fp_out{"data.txt", ios::out};

    if (!fp_out)
    {
        cerr << "File could not be created!\n";
        return 1;
    }

    for (int i = 1; i <= 10; i++)
    {
        fp_out << i << " " << i * i << endl;
    }
    
    fp_out.close();
    return 0;
}
