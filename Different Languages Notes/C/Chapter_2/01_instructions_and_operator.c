#include<stdio.h>

int main(){
    //Instructions and Operator
    //1. Type declaration Instruction -- Instructs the compiler to reserve a memory location 
    int a = 2, b = 3 , c = 4,  d = 5;
    printf("The value of a is %d and the value of b in %d\n",a , b );
    printf("The value of c is %d and the value of d in %d\n",c , d );
    // %d is called format specifier 
    // %d is for int, %f is for float and % is for char
    //Invalid types :
    //1.  If the same variable name is used twice with different values
    //2. If a is used before declaration
    //  -> If float b = a + 3 
    //  -> float a = 1.1
    int e, f, g, h;
    e = f = g = h = 30; // Valid : Assigning the same value to multiple variables 

    // 2. Arithmatic Instructions -- used to perform mathematical operations 
    // Operands can be int float etc, + - * / % are the arithmatic operator 
   // invalid operand for exponent - int d = a^b. In C, ^ is the bitwise XOR operator.
   // There is no operator to perform exponential in c however we can use pow(x,y) from <math.h>
    //% --> modular division operator
    // CANNOT BE APPLIED ON FLOAT 
    // % --> sign is same as of numerator (-5 % 2 = 1 )

    return 0;
}




































