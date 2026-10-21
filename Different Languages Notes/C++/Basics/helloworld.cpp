#include <iostream> // iostream is a headerfile which contains functions for basic input and output operations 
#include <string>

int main(){
    std::cout << "I like pizza." << "\n" ;  // standard character out , c- character , <<(output ) - left shift operator
    std::cout << "It's really tasty !!!!" << std::endl ;  // endl --> next line 
    // sizeof() : determines the size in bytes of a: variables, datatypes, class, objects, etc.
    std::string name = "Taniya Halder";
    double gpa = 9.5;
    char grade = 'A';
    bool taniya_is_best = true;
    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    std::string students[] = {"Sponge", "ninja", "hatodi", "doraemon","nobita"};
    
    
    std::cout << sizeof(name) << " bytes\n";
    std::cout << sizeof(gpa) << " bytes\n";
    std::cout << sizeof(grade) << " bytes\n";
    std::cout << sizeof(taniya_is_best) << " bytes\n";
    std::cout << sizeof(grade) << " bytes\n";
    std::cout << sizeof(students) << " bytes\n";

    std::cout << sizeof(grades)/sizeof(char) << " Elements\n"; // To know how many elements present in a array.

    return 0;
}

// '\n' is faster than std::endl because std::endl not only inserts a newline, it also flushes the output buffer.

/*
    Flushes the output buffer” means the program forces everything waiting to be printed to actually appear on the screen right now.
    
    Usually, output does not go straight to your monitor one character at a time. It first sits in a temporary memory area called a buffer. That is done for speed. std::endl does two things:
    
    prints a newline
    flushes the buffer

    */







































