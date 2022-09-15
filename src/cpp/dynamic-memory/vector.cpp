#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    for (int i = 0; i < 5; i++)
    {
        vec.push_back(i + 1);
    }

    for (int i = 0; i < vec.size(); i++)
    {
        cout << "vec[" << i << "] = " << vec[i] << endl;
    }

    // alternative way to iterate through vector elements
    cout << "vec elements:\n";
    for (int i : vec)
    {
        cout << i << endl;
    }

    return 0;
}
