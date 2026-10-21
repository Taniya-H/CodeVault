#include<stdio.h>

int main(){
    int a ;
    scanf ("%d", &a); // &a s the address of a where the value will be stored into a .
    printf("THe value of a is %d",a);
    return 0;
}

// & is the "address of", operator and it means that the supplied value should be copied to the address which is indicated by the variable . In this case, the value entered by the user will be stored in the memory location of variable a. 

// Escape sequences in C :
// Escape sequences are special characters that are used to represent certain characters or actions in a string. They are denoted by a backslash (\) followed by a specific character. Some commonly used escape sequences in C include:
// 1. \n : Represents a new line character, which moves the cursor to the next line.
// 2. \t : Represents a horizontal tab character, which adds a tab space in the output.
// 3. \\ : Represents a backslash character, which allows you to include a literal backslash in the output.
// 4. \" : Represents a double quote character, which allows you to include a literal double quote in the output.
// 5. \' : Represents a single quote character, which allows you to include a literal single quote in the output.







