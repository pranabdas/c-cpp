# Using SQLite

Install sqlite3 in your system. On Ubuntu/Debian:
```console
sudo apt install sqlite3
```

Include `<sqlite3.h>` in your program, and compile with `-lsqlite3` flag.

Create a database:
```sql
sqlite3 scratch.db
```

Create a table:
```sql
CREATE TABLE country(
    ID INT PRIMARY KEY NOT NULL,
    CCODE CHAR(2),
    NAME VARCHAR(60)
);
```

Insert few rows:
```sql
INSERT INTO country (ID, CCODE, NAME) VALUES (1, 'IN', 'India');
INSERT INTO country (ID, CCODE, NAME) VALUES (2, 'SG', 'Singapore');
INSERT INTO country (ID, CCODE, NAME) VALUES (3, 'US', 'United States');
```

Exit sqlite3 prompt:
```console
.exit
```
