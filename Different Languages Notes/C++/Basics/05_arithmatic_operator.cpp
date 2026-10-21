#include <iostream>

int main(){
    // arithmatic operator = return the result of a specific arithmatic operation (+ - * / %)

    int students = 20;

    //students = students +=1 ;
    // students+=1;
    // students++ ; // decrement operator

    // students--;

    students/=3; // returns without the decimal 
    int remainder = students % 3; 

    std::cout << students<< "\n" ;

    // Operator precedence 
    // paranthesis -> multiplication and division -> addition and substraction 
    // If operators have the same precedence, we evaluate them from left to right.
    int student = 6 - 5 + 4 * 3 / 2 ; // output will be 7 

    std::cout << student << "\n";

    return 0;
}























