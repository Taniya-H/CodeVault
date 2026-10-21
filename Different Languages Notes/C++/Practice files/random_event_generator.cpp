#include <iostream>   // Allows us to use std::cout for printing output
#include <ctime>      // Gives us time(0) for seeding the random number generator
#include <cstdlib>    // Gives us rand() and srand()

int main() {                          // Main function starts here
    srand(time(0));                   // Seeds the random number generator using current time
    int randNum = rand() % 5 + 1;     // Generates a random number from 1 to 5

    switch (randNum) {                // Checks the value of randNum
        case 1:                       // If randNum is 1
            std::cout << "You win a bumper ticket!!";   // Print prize message for case 1
            break;                    // Exit the switch after matching case 1

        case 2:                       // If randNum is 2
            std::cout << "You win a car!! Congratulations!"; // Print prize message for case 2
            break;                    // Exit the switch after matching case 2

        case 3:                       // If randNum is 3
            std::cout << "You win a lottery!! Congrats!!";   // Print prize message for case 3
            break;                    // Exit the switch after matching case 3

        case 4:                       // If randNum is 4
            std::cout << "You win nothing!! Better luck next time."; // Print unlucky message
            break;                    // Exit the switch after matching case 4

        case 5:                       // If randNum is 5
            std::cout << "You lose 500 rupees. Bad luck.";   // Print loss message for case 5
            break;                    // Exit the switch after matching case 5
    }                                 // End of switch statement

    return 0;                         // End program successfully
}                                     // End of main function