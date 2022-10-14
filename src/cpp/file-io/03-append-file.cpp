#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // ofstream is used to write to file
    ofstream fp_out{"data.txt"};

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

    // now we will open the file again to append more content
    ofstream fp_app{"data.txt", ios::app};
    // it is also possible to open the same fp_out
    // fp_out.open("data.txt", ios::app};

    if (!fp_app)
    {
        cerr << "File could not be created!\n";
        return 1;
    }

    for (int i = 11; i <= 15; i++)
    {
        fp_app << i << " " << i * i << endl;
    }

    fp_app.close();
    return 0;
}
