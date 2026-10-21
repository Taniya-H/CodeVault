#include<stdio.h>

int main(){
    
    //TYPE CONVERSION 
    // int and int -> int 
    // int and float -> float
    // float and float -> float 
    int a = 9;
    int b = 2;
    float o = a/b ; // will be 4 not 4.5 because of the rule for type conversion .
    printf("The value of a/b is %f\n", o);
    // 5/2 becomes 2 a sboth the operands are int .
    // 5.0 / 2 becomes 2.5 as one of the operands is float.
    // 2/5 becomes 0 as both the operands are int.
    // In programming, type compatiblity is crucial. For int a = 3.5, the float 3.5 is demoted to 3, losing the fractional part because a is an integer. Conversely, for float a = 8, the integer 8 is promoted to 8.0, matching the float type of a and retaining precision.

    // int k = 3.0/9. What will be the value of k? And also give reason.
    // 3.0/9 = 0.333 .But since k is an int, it cannot store floats and value 0.33 is demoted to 0.

    //Operator Precedence In C
    // (*,/,%) -> (+,- )-> (=)  
    // Operator of higher priority are evaluated first in absence of paranthesis.
    // Operator Associativity In C
    // When operators of equal priority are present in an expression, the tie is taken care of by the left to right associativity . 
    int c = 3;
    int d = 6;
    int e = 9;
    printf("The value is %d\n", c*d/e); // At first multiplies then divides 
    printf("The value is %d\n", c * d/e + 5 ); // The addition is performed at last. 
    printf("The value is %d", 3 * d / 2 * e + 7 * c);
    // 3*b/2*c + 7*a
    // 3*b/2*c + 21 
    // 18 / 2*c + 21 
    // 9*c + 21
    //81+21
    // 102
     return 0;
}