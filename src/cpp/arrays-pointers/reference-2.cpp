#include <iostream>
using namespace std;

enum ERR_CODE
{
    SUCCESS,
    ERROR
};

ERR_CODE factor(int, int &, int &);

int main()
{
    int num, squared, cubed;
    cout << "Please enter a number [0 - 20]: ";
    cin >> num;

    ERR_CODE result = factor(num, squared, cubed);

    if (result == SUCCESS)
    {
        cout << "square = " << squared << endl;
        cout << "cubed = " << cubed << endl;
    }
    else
    {
        cout << "There was an error!\n";
    }

    return 0;
}

ERR_CODE factor(int num, int &squared, int &cubed)
{
    if (num > 20)
    {
        return ERROR;
    }
    else
    {
        squared = num * num;
        cubed = num * num * num;

        return SUCCESS;
    }
}
