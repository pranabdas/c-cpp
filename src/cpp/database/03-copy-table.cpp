#include <iostream>
#include <sqlite3.h>
#include "sqlcpp.h"
using namespace std;

constexpr const char *db_file = DB_PATH "/scratch.db";

// sql command statements
constexpr const char *sql_create = "CREATE TABLE IF NOT EXISTS %s ( ID INT PRIMARY KEY NOT NULL, CCODE CHAR(2), NAME VARCHAR(60) );";
constexpr const char *sql_drop = "DROP TABLE IF EXISTS %s";
constexpr const char *sql_insert = "INSERT INTO %s VALUES (?, ?, ?)";
constexpr const char *sql_begin = "BEGIN";
constexpr const char *sql_commit = "COMMIT";
constexpr const char *sql_select_all = "SELECT * FROM %s";

constexpr const char *country = "country";
constexpr const char *backup = "backup";

constexpr const char *insert_strings[] = {
    "1", "IN", "India",
    "2", "SG", "Singapore",
    "3", "US", "United States"};

// helper function for sqlite3_exec
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
    sqlite3_stmt *stmt1 = nullptr;
    sqlite3_stmt *stmt2 = nullptr;

    char sql_buf1[MAX_SMALL_STRING_LENGTH];
    char sql_buf2[MAX_SMALL_STRING_LENGTH];

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

    // delete tables if exists
    cout << "Drop tables if exists...\n";
    sqlite3_snprintf(MAX_SMALL_STRING_LENGTH, sql_buf1, sql_drop, country);
    sql_do(db, sql_buf1);
    sqlite3_snprintf(MAX_SMALL_STRING_LENGTH, sql_buf2, sql_drop, backup);
    sql_do(db, sql_buf2);

    // create tables
    cout << "Creating tables...\n";
    sqlite3_snprintf(MAX_SMALL_STRING_LENGTH, sql_buf1, sql_create, country);
    sql_do(db, sql_buf1);
    sqlite3_snprintf(MAX_SMALL_STRING_LENGTH, sql_buf2, sql_create, backup);
    sql_do(db, sql_buf2);

    // populate first table
    cout << "Populating first table...\n";
    sql_do(db, sql_begin);
    sqlite3_snprintf(MAX_SMALL_STRING_LENGTH, sql_buf1, sql_insert, country);
    sqlite3_prepare_v2(db, sql_buf1, -1, &stmt1, nullptr);
    int num_cols = sqlite3_bind_parameter_count(stmt1);
    int num_rows = sizeof(insert_strings) / sizeof(const char *) / num_cols;

    int index = 0;
    int row_count = 0;
    for (int rownum = 0; rownum < num_rows; rownum++)
    {
        for (int colnum = 0; colnum < num_cols; colnum++)
        {
            sqlite3_bind_text(stmt1, colnum + 1, insert_strings[index], -1, nullptr);
            index++;
        }
        sqlite3_step(stmt1);
        row_count += sqlite3_changes(db);
        sqlite3_reset(stmt1); // reset the statement for next run
    }
    sqlite3_finalize(stmt1);
    sql_do(db, sql_commit);

    // copy table
    cout << "Coping table...\n";
    sql_do(db, sql_begin);
    sqlite3_snprintf(MAX_SMALL_STRING_LENGTH, sql_buf1, sql_select_all, country);
    sqlite3_snprintf(MAX_SMALL_STRING_LENGTH, sql_buf2, sql_insert, backup);
    sqlite3_prepare_v2(db, sql_buf1, -1, &stmt1, nullptr); // SELECT temp1
    sqlite3_prepare_v2(db, sql_buf2, -1, &stmt2, nullptr); // INSERT temp2
    row_count = 0;
    int col_count = sqlite3_column_count(stmt1);

    while (sqlite3_step(stmt1) == SQLITE_ROW)
    {
        for (int colnum = 0; colnum < col_count; colnum++)
        {
            const char *value = (const char *)sqlite3_column_text(stmt1, colnum);
            sqlite3_bind_text(stmt2, colnum + 1, value, -1, SQLITE_STATIC);
        }
        sqlite3_step(stmt2);
        sqlite3_reset(stmt2);
        row_count++;
    }
    sqlite3_finalize(stmt1);
    sqlite3_finalize(stmt2);
    sql_do(db, sql_commit);

    // read rows from backup (copied) table
    cout << "Printing backup table...\n";
    sqlite3_snprintf(MAX_SMALL_STRING_LENGTH, sql_buf2, sql_select_all, backup);
    sqlite3_prepare_v2(db, sql_buf2, -1, &stmt2, nullptr);
    col_count = sqlite3_column_count(stmt2);
    row_count = 0;
    while (sqlite3_step(stmt2) == SQLITE_ROW)
    {
        for (int i = 0; i < col_count; i++)
        {
            cout << sqlite3_column_text(stmt2, i);
            if (i < col_count - 1)
                cout << ", ";
            else
                cout << endl;
        }
    }
    sqlite3_finalize(stmt2);

    // drop backup table
    cout << "Deleting backup table...\n";
    sqlite3_snprintf(MAX_SMALL_STRING_LENGTH, sql_buf2, sql_drop, backup);
    sql_do(db, sql_buf2);

    // close database
    cout << "Closing database...\n";
    sqlite3_close(db);

    return 0;
}
