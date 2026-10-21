#include <iostream>
#include <string>
#include <algorithm>

int main() {

    // ---------------------------------------------------------
    // Example 1: Using the fill() function
    // ---------------------------------------------------------
    // The fill() function is used to assign the same value
    // to a specified range of elements in an array.
    //
    // Syntax:
    // fill(begin, end, value);
    //
    // The starting position is included, but the ending
    // position is not included.

    const int size = 99;
    std::string foods[size];

    // Fills the first half of the array with "pizza".
    fill(foods, foods + (size / 2), "pizza");

    // Fills the second half of the array with "hamburger".
    fill(foods + (size / 2), foods + size, "hamburger");

    // Displays all elements of the array.
    for (const std::string& food : foods) {
        std::cout << food << '\n';
    }

    std::cout << "\n";

    // ---------------------------------------------------------
    // Example 2: Taking input from the user in an array
    // ---------------------------------------------------------
    // This example shows how to store user input in an array
    // of strings using a loop and getline().

    std::string userFoods[5];

    // This calculates the number of elements in the array.
    int userSize = sizeof(userFoods) / sizeof(userFoods[0]);

    std::string temp;

    // This loop takes input from the user for each element
    // of the array.
    for (int i = 0; i < userSize; i++) {
        std::cout << "Enter the food you llike or q to quit :   " << i + 1 << ": ";
        std::getline(std::cin, temp);
        if(temp == "q"){
            break;
        }
        else{
            userFoods[i] = temp;
        }
    }

    // This prints the foods entered by the user.
    std::cout << "You like the following foods:\n";

    for(int i = 0; !foods[i].empty(); i++) {
        std::cout << foods[i] << '\n';
    }

    return 0;
}