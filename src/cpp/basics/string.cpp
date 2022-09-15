#include <iostream>
#include <string>
#include <cstring> // strcpy(), strcat()
using namespace std;

int main()
{
    char message1[] = "Hello world.";
    cout << message1 << endl;

    char message2[80] = "Have a great day.";
    cout << message2 << endl;

    // modify string
    strcpy(message2, "Welcome to learning C++!");
    strcat(message2, " Happy learning."); 
    // if the array does not contain string already, use strcpy() instead
    cout << message2 << endl;

    string userName;
    cout << "What is your name?" << '\n';
    // read line of input, usual cin would read until there is a blank space in
    // the given input
    getline(cin, userName);
    cout << "Hi " << userName << '\n';

    // evaluate length of string
    int str_len;
    str_len = userName.length();
    cout << "user name length = " << str_len << endl;

    char str[] = "Happy learning!";
    cout << str << endl;

    // using pointer reference
    const char *str_ptr = "How are you doing?";
    cout << str_ptr << endl;

    // string concatenation
    const char *message = "Today is Friday. "
                          "Have a great weekend.";
    cout << message << endl;

    // string comparison
    // c++ compares string in lexicographical/alphabetical order
    // so "abc" < "de"
    // c++ compares the ascii values of the characters

    // searching
    string my_string = "abcdefgh";
    int position;
    position = my_string.find("de");
    cout << "Position of 'de' in " << my_string << " is " << position << endl;
    // it would print 3
    // in case of multiple matches, return position of first match
    // string search with a starting index: str.find("look", starting_index)

    if (my_string.find("aa") == string::npos)  // can be used to find no-match
    {
        cout << "Not Found.\n";
    }

    return 0;
}
