#include <iostream>
using namespace std;

int main()
{
    float degC;
    cout << "Enter value in deg C: ";
    cin >> degC;

    float degF;
    degF = (9.0 / 5) * degC + 32;
    // notice 9/5 would result in integer division give 1
    // degF = (static_cast<float>(9) / 5) * degC + 32;

    cout << degC << " deg C = " << degF << " deg F" << endl;
    return 0;
}
