## Table of Contents

1. [Core Concepts](#1-core-concepts)
2. [psql Meta-Commands](#2-psql-meta-commands)
3. [Data Types](#3-data-types)
4. [Managing Databases](#4-managing-databases)
5. [Creating Tables](#5-creating-tables)
6. [Inserting Data](#6-inserting-data)
7. [Querying Data](#7-querying-data)
8. [Aggregations & Grouping](#8-aggregations--grouping)
9. [Arithmetic Operators](#9-arithmetic-operators)
10. [Column Aliases](#10-column-aliases)
11. [Handling NULL Values](#11-handling-null-values)
12. [Timestamps & Dates](#12-timestamps--dates)
13. [Primary Keys](#13-primary-keys)
14. [Altering Tables](#14-altering-tables)
15. [Deleting Data](#15-deleting-data)
16. [Updating Data](#16-updating-data)
17. [Handling Conflicts (Upsert)](#17-handling-conflicts-upsert)
18. [Foreign Keys & Joins](#18-foreign-keys--joins)
19. [Exporting to CSV](#19-exporting-to-csv)
20. [Serial & Sequences](#20-serial--sequences)
21. [Extensions](#21-extensions)
22. [UUID Data Type](#22-uuid-data-type)
23. [Quick Reference Cheatsheet](#23-quick-reference-cheatsheet)

---

## 1. Core Concepts

| Term | Definition |
|------|-----------|
| **Database** | A system to store, manipulate, and retrieve data. |
| **PostgreSQL (Postgres)** | A powerful, open-source relational database engine. |
| **SQL** | Structured Query Language — the language used to communicate with a database. |
| **Table** | Data is stored in tables as **rows** (records) and **columns** (fields). |
| **Relational Database** | A database that defines relationships between one or more tables. |

---

## 2. psql Meta-Commands

> These commands are run inside the `psql` shell, **not** as SQL statements.

```sql
-- Authentication & Help
psql -U <username>         -- Log in as a specific user
psql --help                -- Show help in the system terminal
help                       -- Show general help inside psql

-- Describe Objects
\d                         -- List all database objects (tables, sequences, views)
\d <table_name>            -- Describe a specific table (columns, types, constraints)
\dt                        -- Show only tables (excludes sequences and views)

-- Expanded View
\x                         -- Toggle expanded display mode

-- Database Management
\l                         -- List all databases
\c <database_name>         -- Connect/switch to a database

-- Execute SQL File
\i <filepath>              -- Run all SQL commands from a file

-- List Functions
\df                        -- List all available functions

-- Miscellaneous
\! cls                     -- Clear the psql console (Windows)
\! clear                   -- Clear the psql console (macOS/Linux)
```

---

## 3. Data Types

| Name | Aliases | Description |
|------|---------|-------------|
| `bigint` | `int8` | Signed 8-byte integer |
| `bigserial` | `serial8` | Auto-incrementing 8-byte integer |
| `boolean` | `bool` | Logical Boolean (true/false) |
| `bytea` | — | Binary data ("byte array") |
| `character(n)` | `char(n)` | Fixed-length character string |
| `character varying(n)` | `varchar(n)` | Variable-length character string |
| `date` | — | Calendar date (year, month, day) |
| `double precision` | `float8` | Double precision floating-point (8 bytes) |
| `integer` | `int`, `int4` | Signed 4-byte integer |
| `interval` | — | Time span |
| `json` | — | Textual JSON data |
| `jsonb` | — | Binary JSON data (decomposed, faster to query) |
| `money` | — | Currency amount |
| `numeric(p, s)` | `decimal(p, s)` | Exact numeric of selectable precision |
| `text` | — | Variable-length character string (unlimited) |
| `timestamp` | — | Date and time (no timezone) |
| `timestamptz` | — | Date and time with timezone |
| `uuid` | — | Universally unique identifier |
| `inet` | — | IPv4 or IPv6 host address |
| `cidr` | — | IPv4 or IPv6 network address |
| `macaddr` | — | MAC address |
| `bit(n)` | — | Fixed-length bit string |
| `bit varying(n)` | `varbit(n)` | Variable-length bit string |

---

## 4. Managing Databases

### Create a Database

```sql
CREATE DATABASE <database_name>;
```

> ⚠️ Creating a database does **not** switch you into it automatically. Use `\c <database_name>` to connect after creating.

### Connect with Full Options

```sql
-- Syntax: psql -h <host> -p <port> -U <user> <database>
psql -h localhost -p 5432 -U postgres my_database
```

### Drop (Delete) a Database

```sql
DROP DATABASE <database_name>;
```

> ⚠️ This permanently deletes the entire database and **cannot be undone.**

---

## 5. Creating Tables

### Basic Table (No Constraints)

```sql
CREATE TABLE person (
    id             INT,
    first_name     VARCHAR(50),
    last_name      VARCHAR(50),
    gender         VARCHAR(6),
    date_of_birth  TIMESTAMP
);
```

### Table with Constraints

```sql
CREATE TABLE person (
    id             BIGSERIAL    NOT NULL PRIMARY KEY,
    first_name     VARCHAR(50)  NOT NULL,
    last_name      VARCHAR(50)  NOT NULL,
    gender         VARCHAR(6)   NOT NULL,
    email          VARCHAR(50),                -- optional field
    date_of_birth  TIMESTAMP    NOT NULL
);
```

### Constraint Reference

| Constraint | Description |
|-----------|-------------|
| `BIGSERIAL` | Auto-incrementing integer; Postgres assigns the next value automatically. |
| `PRIMARY KEY` | Uniquely identifies each row. No two rows can share the same value. |
| `NOT NULL` | The field must always have a value; it cannot be empty on insert. |
| `UNIQUE` | Ensures all values in the column are distinct. |
| `CHECK` | Validates that values satisfy a specified condition. |
| `REFERENCES` | Defines a foreign key relationship to another table. |

### Drop a Table

```sql
DROP TABLE <table_name>;
```

---

## 6. Inserting Data

```sql
INSERT INTO person (first_name, last_name, gender, date_of_birth)
VALUES ('Anne', 'Smith', 'Female', DATE '1988-01-09');
```

> 💡 Use [Mockaroo](https://www.mockaroo.com/) to generate large amounts of realistic test data.

---

## 7. Querying Data

### SELECT Basics

```sql
-- Select all columns
SELECT * FROM person;

-- Select specific columns
SELECT first_name, last_name FROM person;
```

### Sorting Results

```sql
-- Ascending (default)
SELECT * FROM person ORDER BY country_of_birth ASC;

-- Descending
SELECT * FROM person ORDER BY country_of_birth DESC;

-- Sort by multiple columns
SELECT * FROM person ORDER BY id, country_of_birth DESC;
```

### Distinct Values

```sql
-- Return only unique values from a column
SELECT DISTINCT country_of_birth FROM person ORDER BY country_of_birth;
```

### Filtering with WHERE

```sql
-- Single condition
SELECT * FROM person WHERE gender = 'Female';

-- Multiple conditions
SELECT * FROM person
WHERE gender = 'Male'
  AND (country_of_birth = 'Poland' OR country_of_birth = 'China')
  AND last_name = 'Pietersma';
```

### Comparison Operators

```sql
SELECT 1 = 1;   -- equal          → true
SELECT 1 < 2;   -- less than      → true
SELECT 1 > 2;   -- greater than   → false
SELECT 1 <= 2;  -- less or equal  → true
SELECT 1 >= 2;  -- greater or equal → false
SELECT 1 <> 2;  -- not equal      → true

-- Applying arithmetic in a query
SELECT model, make, ROUND(price - (price * 0.10), 2) FROM car;

--Sum 
SELECT SUM(price) FROM car;

```

### LIMIT, OFFSET & FETCH

```sql
-- LIMIT (non-standard, widely supported)
SELECT * FROM person OFFSET 5 LIMIT 10;

-- FETCH (SQL standard — preferred)
SELECT * FROM person OFFSET 5 FETCH FIRST 5 ROWS ONLY;
```

### IN Operator

```sql
SELECT * FROM person
WHERE country_of_birth IN ('China', 'Brazil', 'France');
```

### BETWEEN Operator

```sql
SELECT * FROM person
WHERE date_of_birth BETWEEN DATE '2000-01-01' AND DATE '2015-01-01';
```

### LIKE & ILIKE (Pattern Matching)

```sql
-- Starts with any characters, ends with 'google.'
SELECT * FROM person WHERE email LIKE '%google.%';

-- Exactly 8 characters before '@'
SELECT * FROM person WHERE email LIKE '________@%';

-- Domain contains 'google.'
SELECT * FROM person WHERE email LIKE '%@google.%';

-- Case-insensitive match (ILIKE)
SELECT * FROM person WHERE email ILIKE 'p%';
```

| Wildcard | Meaning |
|---------|---------|
| `%` | Any sequence of characters (including none) |
| `_` | Exactly one character |

---

## 8. Aggregations & Grouping

### Aggregate Functions

```sql
SELECT COUNT(*)          FROM car;
SELECT MAX(price)        FROM car;
SELECT MIN(price)        FROM car;
SELECT AVG(price)        FROM car;
SELECT ROUND(AVG(price), 2) FROM car;
SELECT SUM(price)        FROM car;
```

### Grouped Aggregations

```sql
-- Count per country
SELECT country_of_birth, COUNT(*)
FROM person
GROUP BY country_of_birth;

-- Filter groups using HAVING
SELECT country_of_birth, COUNT(*)
FROM person
GROUP BY country_of_birth
HAVING COUNT(*) > 5
ORDER BY country_of_birth;

-- Min price per make and model
SELECT make, model, MIN(price)
FROM car
GROUP BY make, model;
```

> **Note:**
> - Use `WHERE` to filter **rows** before grouping.
> - Use `HAVING` to filter **groups** after grouping.

---

## 9. Arithmetic Operators

```sql
SELECT 10 + 2;   -- addition          → 12
SELECT 10 - 2;   -- subtraction       → 8
SELECT 10 * 2;   -- multiplication    → 20
SELECT 10 / 2;   -- integer division  → 5
SELECT 10 ^ 2;   -- exponentiation    → 100
SELECT 5 !;      -- factorial         → 120
SELECT 10 % 4;   -- modulo (remainder)→ 2

-- Applying arithmetic in a query
SELECT make, model, ROUND(price - (price * 0.10), 2) AS discounted_price
FROM car;
```

---

## 10. Column Aliases

Use `AS` to give computed or renamed columns a readable label.

```sql
SELECT
    make,
    model,
    price                               AS original_price,
    ROUND(price * 0.10, 2)             AS ten_percent,
    ROUND(price - (price * 0.10), 2)   AS price_after_10_percent_discount
FROM car;
```

---

## 11. Handling NULL Values

### COALESCE — Return the First Non-NULL Value

```sql
-- Returns 1 (first non-null value)
SELECT COALESCE(NULL, NULL, 1, 10) AS number;

-- Substitute a fallback for missing emails
SELECT COALESCE(email, 'EMAIL NOT PROVIDED') FROM person;
```

### NULLIF — Return NULL When Two Values Are Equal

Useful for avoiding division-by-zero errors.

```sql
-- Returns NULL when both arguments are equal (avoids divide-by-zero)
SELECT 10 / NULLIF(10, 10);   -- → NULL

-- Safe division
SELECT 10 / NULLIF(0, 0);     -- → NULL instead of error
```

---

## 12. Timestamps & Dates

### Getting the Current Date/Time

```sql
SELECT NOW();           -- full timestamp with timezone
SELECT NOW()::DATE;     -- date only     (e.g., 2025-06-10)
SELECT NOW()::TIME;     -- time only     (e.g., 14:30:00)
```

### Date Arithmetic

```sql
-- Subtract from current date
SELECT NOW() - INTERVAL '1 YEAR';
SELECT NOW() - INTERVAL '10 DAYS';

-- Add to current date and cast to DATE
SELECT (NOW() + INTERVAL '10 MONTHS')::DATE;
```

### Extracting Parts of a Date

```sql
SELECT EXTRACT(YEAR    FROM NOW());   -- e.g., 2025
SELECT EXTRACT(MONTH   FROM NOW());   -- e.g., 6
SELECT EXTRACT(DAY     FROM NOW());   -- e.g., 10
SELECT EXTRACT(DOW     FROM NOW());   -- Day of week (0 = Sunday)
SELECT EXTRACT(CENTURY FROM NOW());   -- e.g., 21
```

### AGE Function

Calculates the difference between two dates as an interval.

```sql
SELECT first_name, last_name, date_of_birth,
       AGE(NOW(), date_of_birth) AS age
FROM person;
```

---

## 13. Primary Keys

A **Primary Key** uniquely identifies each row in a table. No two rows can have the same primary key value, and it cannot be `NULL`.

```sql
-- Defined at table creation
CREATE TABLE person (
    id BIGSERIAL NOT NULL PRIMARY KEY,
    ...
);

-- Added after the fact
ALTER TABLE person ADD PRIMARY KEY (id);
```

> ⚠️ Adding a primary key after the fact will **fail** if duplicate values already exist in the column.

---

## 14. Altering Tables

```sql
-- Add a new column
ALTER TABLE person
ADD COLUMN phone_number VARCHAR(20);

-- Change a column's data type
ALTER TABLE car
ALTER COLUMN price TYPE VARCHAR(50);

-- Drop a constraint (e.g., a primary key)
ALTER TABLE car
DROP CONSTRAINT car_pkey;

-- Add a primary key constraint
ALTER TABLE car
ADD PRIMARY KEY (id);

-- Add a unique constraint (named)
ALTER TABLE person
ADD CONSTRAINT unique_email_address UNIQUE (email);

-- Add a unique constraint (shorthand)
ALTER TABLE person
ADD UNIQUE (email);

-- Add a check constraint
ALTER TABLE person
ADD CONSTRAINT gender_constraint CHECK (gender = 'Female' OR gender = 'Male');
```

> ⚠️ `UNIQUE` constraints will fail if duplicate values already exist in the column.

---

## 15. Deleting Data

```sql
-- Delete specific rows
DELETE FROM person WHERE id = 1;

-- Delete all rows (table structure remains)
DELETE FROM person;
```

> ⚠️ Always use a `WHERE` clause when deleting rows unless you intend to clear the entire table.

---

## 16. Updating Data

```sql
-- Update a single field for a specific row
UPDATE person
SET email = 'ommar@gmail.com'
WHERE id = 2011;

-- Update multiple fields for a specific row
UPDATE person
SET first_name = 'Taniya',
    last_name  = 'Halder',
    email      = 'ommar@gmail.com'
WHERE id = 2011;
```

---

## 17. Handling Conflicts (Upsert)

> These require a constraint (e.g., `PRIMARY KEY` or `UNIQUE`) on the conflict column.

```sql
-- Insert or do nothing on conflict
INSERT INTO person (id, first_name, last_name, gender, email, date_of_birth)
VALUES (2017, 'Russ', 'Ruddoch', 'Male', 'russ@example.com', DATE '1952-08-09')
ON CONFLICT (id) DO NOTHING;

-- Insert or update on conflict (Upsert)
INSERT INTO person (id, first_name, last_name, gender, email, date_of_birth)
VALUES (2017, 'Russ', 'Ruddoch', 'Male', 'russ@example.com', DATE '1952-08-09')
ON CONFLICT (id) DO UPDATE
    SET email     = EXCLUDED.email,
        last_name = EXCLUDED.last_name;
```

> `EXCLUDED` refers to the row that was proposed for insertion but conflicted.

---

## 18. Foreign Keys & Joins

### Defining a Foreign Key

```sql
CREATE TABLE person (
    id       BIGSERIAL NOT NULL PRIMARY KEY,
    car_id   BIGINT REFERENCES car(id) UNIQUE,
    ...
);
```

### Updating a Foreign Key

```sql
UPDATE person
SET car_id = 2
WHERE id = 1;
```

### INNER JOIN

Returns only rows where there is a match in **both** tables.

```sql
-- Return all columns
SELECT * FROM person
JOIN car ON person.car_id = car.id;

-- Return specific columns
SELECT person.first_name, car.make, car.model, car.price
FROM person
JOIN car ON person.car_id = car.id;
```

### LEFT JOIN

Returns **all rows from the left table**, plus matched rows from the right table. Unmatched right-side columns return `NULL`.

```sql
SELECT * FROM person
LEFT JOIN car ON car.id = person.car_id;
```

### Deleting Records With Foreign Keys

You must delete the **referencing row** before deleting the **referenced row**.

```sql
-- 1. Delete the row that holds the foreign key reference
DELETE FROM person WHERE id = 9000;

-- 2. Then delete the referenced row
DELETE FROM car WHERE id = 13;
```

---

## 19. Exporting to CSV

```sql
\copy (
    SELECT * FROM person
    LEFT JOIN car ON car.id = person.car_id
) TO '/path/to/output.csv' DELIMITER ',' CSV HEADER;
```

> Replace `/path/to/output.csv` with the actual file path on your system.

---

## 20. Serial & Sequences

```sql
-- Get the next value from a sequence
SELECT nextval('person_id_seq'::regclass);

-- Reset a sequence to a specific value
ALTER SEQUENCE person_id_seq RESTART WITH 10;
```

> Sequence names follow the pattern `<table>_<column>_seq` (e.g., `person_id_seq`).

---

## 21. Extensions

```sql
-- List all available extensions
SELECT * FROM pg_available_extensions;

-- List installed extensions
SELECT * FROM pg_extension;

-- Install a specific extension
CREATE EXTENSION IF NOT EXISTS "uuid-ossp";
```

---

## 22. UUID Data Type

UUIDs are a great choice for primary keys in distributed systems since they are globally unique.

```sql
-- Install the uuid extension
CREATE EXTENSION IF NOT EXISTS "uuid-ossp";

-- Generate a UUID (v4 — random)
SELECT uuid_generate_v4();

-- List available UUID functions
\df *uuid*

-- Use UUID as a primary key in CREATE TABLE
CREATE TABLE person (
    person_uid    UUID         NOT NULL DEFAULT uuid_generate_v4() PRIMARY KEY,
    first_name    VARCHAR(50)  NOT NULL,
    last_name     VARCHAR(50)  NOT NULL,
    gender        VARCHAR(6)   NOT NULL,
    email         VARCHAR(50),
    date_of_birth DATE         NOT NULL,
    country_of_birth VARCHAR(50)
);

-- Insert using uuid_generate_v4()
INSERT INTO person (person_uid, first_name, last_name, gender, email, date_of_birth, country_of_birth)
VALUES (
    uuid_generate_v4(),
    'Taniya', 'Halder', 'Female',
    'taniya@example.com',
    DATE '1995-04-12',
    'India'
);
```

---

## 23. Quick Reference Cheatsheet

| Operation | Command |
|-----------|---------|
| Create database | `CREATE DATABASE name;` |
| Drop database | `DROP DATABASE name;` |
| Create table | `CREATE TABLE name (...);` |
| Drop table | `DROP TABLE name;` |
| Insert row | `INSERT INTO name (...) VALUES (...);` |
| Select all | `SELECT * FROM name;` |
| Filter rows | `SELECT ... WHERE condition;` |
| Sort results | `SELECT ... ORDER BY col ASC/DESC;` |
| Distinct values | `SELECT DISTINCT col FROM name;` |
| Limit results | `SELECT ... LIMIT n OFFSET m;` |
| Group rows | `SELECT ... GROUP BY col;` |
| Filter groups | `... HAVING condition;` |
| Update rows | `UPDATE name SET col = val WHERE condition;` |
| Delete rows | `DELETE FROM name WHERE condition;` |
| Add column | `ALTER TABLE name ADD COLUMN ...;` |
| Drop constraint | `ALTER TABLE name DROP CONSTRAINT ...;` |
| Current timestamp | `SELECT NOW();` |
| Date only | `SELECT NOW()::DATE;` |
| Null fallback | `COALESCE(col, 'default')` |
| Safe division | `value / NULLIF(divisor, 0)` |
| Upsert | `INSERT ... ON CONFLICT (...) DO UPDATE SET ...;` |
| Export to CSV | `\copy (query) TO 'file.csv' CSV HEADER;` |
| Generate UUID | `SELECT uuid_generate_v4();` |
| List databases | `\l` |
| Switch database | `\c database_name` |
| Describe table | `\d table_name` |
| List tables | `\dt` |
| List functions | `\df` |
