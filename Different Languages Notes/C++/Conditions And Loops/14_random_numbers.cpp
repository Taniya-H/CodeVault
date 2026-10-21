#include <iostream>
#include <ctime>

int main(){
    //pseudo-random = NOT truly random (but close)

    srand(time(NULL));
    // This seeds the random number generator.
    // srand(...) initializes the random sequence.
    // time(NULL) gives the current time in seconds.
    // Using the current time makes the random numbers different each time you run the program.
    
    int num1 = (rand() % 6) + 1; // gives random number between 1 - 6 

    std::cout << num1 << "\n";
    return 0;
}