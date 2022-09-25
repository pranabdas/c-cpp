// compile: g++ filename.cpp -lsqlite3
#include <iostream>
#include <sqlite3.h>
using namespace std;

int main()
{
    cout << "SQLite version: " << sqlite3_libversion() << endl;
    return 0;
}
