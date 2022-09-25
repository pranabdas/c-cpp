// this program will read from scratch.db (in current directory)
// See README.md on how to prepare the database or run 02-create-table.cpp
#include <iostream>
#include <sqlite3.h>
#include "sqlcpp.h"
using namespace std;

constexpr const char *db_file = DB_PATH "/scratch.db";

int main()
{
    sqlite3 *db = nullptr;
    sqlite3_stmt *statement = nullptr;

    cout << "Database file: " << db_file << endl;

    // open database
    int return_code = sqlite3_open(db_file, &db);
    if (return_code == SQLITE_OK)
    {
        cout << "Database is successfully opened.\n";
    }
    else
    {
        cout << sqlite3_errstr(return_code) << endl;
        exit(1);
    }

    // prepare a statement
    sqlite3_prepare_v2(db, "SELECT * FROM country", -1, &statement, nullptr);

    // print column names
    cout << "Following columns are present in the country table:\n";

    int col_count = sqlite3_column_count(statement);
    for (int i = 0; i < col_count; i++)
    {
        cout << sqlite3_column_name(statement, i);
        if (i < col_count - 1)
        {
            cout << ", ";
        }
    }

    cout << endl;

    // print rows (one at a time)
    while (sqlite3_step(statement) == SQLITE_ROW)
    {
        // loop through the cols
        for (int i = 0; i < col_count; i++)
        {
            cout << sqlite3_column_text(statement, i);
            if (i < col_count - 1)
            {
                cout << ", ";
            };
        }
        cout << endl;
    }

    sqlite3_finalize(statement);
    sqlite3_close(db);
    cout << "Statement finalized and database closed.\n";
    return 0;
}
