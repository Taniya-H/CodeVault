#include <stdio.h>

int main() { // main is the entry point of a C program, where execution starts
    int a; // Variable declaration, gets stored in RAM
    a = 6; // Variable initialization
    int b = 7; // Variable declaration and initialization in one line
    printf("The output of this program is %d\n", a); // %d is used to print integer values

    float c = 1.4f; // Semi colon is used to end/terminate a statement in C
    printf("The value of c is %f\n", c); // %f is used to print float values
    char d = 'A'; // Char should always be enclosed in single quotes, and it can only hold a single character.
    printf("The value of d is %c\n", d); // %c is used to print char values

    // Checking the size of data types in C using sizeof operator:
    printf("Size of int: %zu bytes\n", sizeof(int)); // %zu is used to print size_t type returned by sizeof operator
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of char: %zu bytes\n", sizeof(char));

    return 0;
}

// Rules for naming variables in C:
// 1. Variable names can only contain letters (both uppercase and lowercase), digits, and underscores.
// 2. Variable names must begin with a letter or an underscore, not a digit.
// 3. Variable names are case-sensitive, meaning that 'Variable' and 'variable' are considered different variables.
// 4. Variable names cannot be the same as C keywords (e.g., int, return, if, else, etc.).
// 5. Variable names should not have commas or spaces in between.

// Space consumed by different data types in C (depends on the system and compiler, but typically):
// 1. int: Typically consumes 4 bytes (32 bits) of memory (can vary based on the system).
// 2. float: Typically consumes 4 bytes (32 bits) of memory.
// 3. char: Typically consumes 1 byte (8 bits) of memory).

// Types of constants in C:
// 1. Integer constants: These are whole numbers without a decimal point (e.g., 10, -5, 0).
// 2. Floating-point constants: These are numbers with a decimal point (e.g., 3.14, -0.001).
// 3. Character constants: These are single characters enclosed in single quotes (e.g., 'A', '$', '@').


// Keywords in C :
// These are reserved words whose meaning is already known to the compiler. There are 32 keywords in c and they are : auto, break, case, char, const, continue, default, do, double, else, enum, extern, float, for, goto, if, int, long, register, return, short, signed, sizeof, static, struct, switch, typedef, union, unsigned, void, volatile and while.


// Library functions in C :
// These are pre-defined functions provided by the C standard library that perform specific tasks. Some commonly used library functions include printf() for output, scanf() for input, strlen() for string length, and malloc() for memory allocation. These functions are declared in header files (e.g., stdio.h, string.h, stdlib.h) and can be used by including the appropriate header file at the beginning of the program.































