#include <iostream>
#include <sqlite3.h>
#include "sqlcpp.h"
using namespace std;

constexpr const char *db_file = DB_PATH "/scratch.db";

// compound statement, concatenated c++ strings
constexpr const char *sql_create =
    "DROP TABLE IF EXISTS country;"
    "BEGIN;"
    "CREATE TABLE IF NOT EXISTS country ( ID INT PRIMARY KEY NOT NULL, CCODE CHAR(2), NAME VARCHAR(60) );"
    "INSERT INTO country (ID, CCODE, NAME) VALUES (1, 'IN', 'India');"
    "INSERT INTO country (ID, CCODE, NAME) VALUES (2, 'SG', 'Singapore');"
    "INSERT INTO country (ID, CCODE, NAME) VALUES (3, 'US', 'United States');"
    "COMMIT;";

// helper function
int sql_do(sqlite3 *db, const char *sql)
{
    cout << "sql_do: " << sql << endl;
    int rc = sqlite3_exec(db, sql, nullptr, nullptr, nullptr);
    if (rc != SQLITE_OK)
    {
        puts(sqlite3_errstr(rc));
        exit(1);
    }
    return sqlite3_changes(db);
}

int main()
{
    sqlite3 *db = nullptr;
    sqlite3_stmt *stmt = nullptr;
    char *errmsg = nullptr;

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

    // create table
    return_code = sqlite3_exec(db, sql_create, nullptr, nullptr, &errmsg);
    if (return_code != SQLITE_OK)
    {
        cout << errmsg << endl;
        sqlite3_free(errmsg);
        exit(1);
    }

    // prepare a statement
    sqlite3_prepare_v2(db, "SELECT * FROM country", -1, &stmt, nullptr);

    // print/fetch rows
    int col_count = sqlite3_column_count(stmt);
    int row_count = 0;
    while (sqlite3_step(stmt) == SQLITE_ROW)
    {
        cout << "Row " << row_count++ << ": ";
        for (int i = 0; i < col_count; ++i)
        {
            cout << sqlite3_column_text(stmt, i);
            if (i < col_count - 1)
                printf(", ");
        }
        cout << endl;
    }

    sqlite3_finalize(stmt);

    // make query
    const char *sql_prepare = "SELECT * FROM country WHERE NAME = ?";
    const char *param1 = "Singapore";
    sqlite3_prepare_v2(db, sql_prepare, -1, &stmt, nullptr);
    cout << "Statement: " << sql_prepare << endl;
    cout << "Statement has " << sqlite3_bind_parameter_count(stmt)
         << " parameter(s)\n";

    // bind the string to the statement
    // sqlite3_bind_text(stmt, param_position, param_string, param_length (or -1
    // for strlen), destructor or constant);
    sqlite3_bind_text(stmt, 1, param1, -1, SQLITE_STATIC);
    col_count = sqlite3_column_count(stmt);
    while (sqlite3_step(stmt) == SQLITE_ROW)
    {
        for (int i = 0; i < col_count; i++)
        {
            cout << sqlite3_column_text(stmt, i);

            if (i < col_count - 1)
            {
                cout << ", ";
            }
            else
            {
                cout << endl;
            }
        }
    }

    sqlite3_finalize(stmt);

    // insert rows using prepared statement
    // sqlite3_bind_text(stmt, param_idx, param_string, param_len (or -1 for
    // strlen), destructor or constant);
    const char *sql_insert = "INSERT INTO country VALUES (?, ?, ?)";
    sqlite3_prepare_v2(db, sql_insert, -1, &stmt, nullptr);
    
    // begin transaction
    sql_do(db, "BEGIN");

    // below code needed for each row
    const char *insert_strings[] = {"4", "IT", "Italy"};
    for (int i = 0; i < col_count; i++)
    {
        sqlite3_bind_text(stmt, i + 1, insert_strings[i], -1, SQLITE_STATIC);
    }
    sqlite3_step(stmt);
    sqlite3_reset(stmt); // reset statement if there is more insertion
    // above code needed for each row

    sqlite3_finalize(stmt);

    // commit transaction
    sql_do(db, "COMMIT");

    // print table again
    sqlite3_prepare_v2(db, "SELECT * FROM country", -1, &stmt, nullptr);
    col_count = sqlite3_column_count(stmt);
    row_count = 0;
    while (sqlite3_step(stmt) == SQLITE_ROW)
    {
        for (int i = 0; i < col_count; ++i)
        {
            cout << sqlite3_column_text(stmt, i);
            if (i < col_count - 1)
                printf(", ");
        }
        cout << endl;
    }

    // drop table
    // return_code = sqlite3_exec(db, "DROP TABLE IF EXISTS country", nullptr, nullptr, &errmsg);
    // if (return_code != SQLITE_OK)
    // {
    //     cout << errmsg << endl;
    //     sqlite3_free(errmsg);
    //     exit(1);
    // }

    sqlite3_finalize(stmt);
    sqlite3_close(db);
    cout << "Statements finalized and database closed.\n";
    return 0;
}
