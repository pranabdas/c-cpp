#include <iostream>
using namespace std;

struct user
{
    string name;
    int age;
    float height;
};

int main()
{
    user new_user = {"Pranab", 35, 185};

    cout << "Name : " << new_user.name << endl;
    cout << "Age : " << new_user.age << endl;
    cout << "Height : " << new_user.height << endl;

    return 0;
}
