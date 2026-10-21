#include<stdio.h>

int main(){
    int age = 100;

    if(age>=18 && age<100){
        printf("Your eligible for voting\n");
    }
    else if(age>=100){
        printf("Tapak ne ka time hgya dadu.\n");
    }
    else{
        printf("Your not eligible for voting\n");
    }
    
    if(0){
        printf("Zero here: to show true and false for non zero operation");
    }

     return 0;
}


// Relational operators - ==, >=, <, >, !=
// Logical Operator 
// In C a non- zero operatoe is considered to be true

/*=========================================================
                LOGICAL OPERATORS IN C
===========================================================

Logical operators are used to combine or modify conditions.
They always return:
    1 -> True
    0 -> False

There are three logical operators in C:
    &&  -> Logical AND
    ||  -> Logical OR
    !   -> Logical NOT

-----------------------------------------------------------
1. LOGICAL AND (&&)
-----------------------------------------------------------
Returns true (1) ONLY when BOTH conditions are true.

Truth Table:
--------------------------------
Condition 1 | Condition 2 | Result
--------------------------------
     1      |      1      |   1
     1      |      0      |   0
     0      |      1      |   0
     0      |      0      |   0
--------------------------------

Examples:
(5 > 3 && 8 > 4)   // 1 && 1 -> 1 (True)
(5 > 3 && 8 < 4)   // 1 && 0 -> 0 (False)

-----------------------------------------------------------
2. LOGICAL OR (||)
-----------------------------------------------------------
Returns true (1) if AT LEAST ONE condition is true.

Truth Table:
--------------------------------
Condition 1 | Condition 2 | Result
--------------------------------
     1      |      1      |   1
     1      |      0      |   1
     0      |      1      |   1
     0      |      0      |   0
--------------------------------

Examples:
(5 > 3 || 8 < 4)   // 1 || 0 -> 1 (True)
(5 < 3 || 8 < 4)   // 0 || 0 -> 0 (False)

-----------------------------------------------------------
3. LOGICAL NOT (!)
-----------------------------------------------------------
Reverses the logical value.

Original | Result
-----------------
   1     |   0
   0     |   1
-----------------

Examples:
!(3 == 3)   // !1 -> 0 (False)
!(3 > 30)   // !0 -> 1 (True)

-----------------------------------------------------------
Why use logical operators?
-----------------------------------------------------------
They allow multiple conditions to be checked in a single
statement, making programs shorter, cleaner, and easier
to read.

Example:
if (age >= 18 && age <= 60)
{
    printf("Eligible");
}
*/