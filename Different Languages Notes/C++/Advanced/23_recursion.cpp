#include <iostream>

void walk(int steps);

int main(){
    // recursion = a programming technique where a function invokes itself from within break a complex concept into a repetable single steps

    //(iterative vs recursive)

    // advantages = Less code and is cleaner. Useful for sorting and searching algorithms 
    // disadvantages = uses more memory, slower.

    walk(4);
    return 0;
}

void walk(int steps){
    if(steps > 0){
        std::cout << "You take a step!!\n";
        walk(steps - 1);
    }
}


// A stack overflow occurs when a program exhausts the memory allocated for the call stack, usually due to excessive recursion or very large local variables, causing the program to crash.
// |------------------------| ----------------------------------|
// |          Stack                 |                     Heap                       |
// |------------------------| ----------------------------------|
// | Automatic memory | Dynamic memory                    |
// | Fast                             | Slower                                        |
// | Small                          | Much larger                               |
// | Local variables         | `new`, `malloc`, containers  |
// |------------------------| -----------------------------------|