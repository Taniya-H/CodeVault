#include <iostream>
#include <cmath>

int main() {
    char op;
    double num1, num2;

    std::cout << "*************************  CALCULATOR  **********************************\n";
    std::cout << "Enter the operation you want to perform(+ - / * %): \n";
    std::cin >> op;
    std::cout << "Enter the first number: \n";
    std::cin >> num1;
    std::cout << "Enter the second number: \n";
    std::cin >> num2;

    switch (op) {
    case '+':
        std::cout << "The addition of the number is : " << num1 + num2 << '\n';
        break;
    case '-':
        std::cout << "The subtraction of the number is : " << num1 - num2 << '\n';
        break;
    case '*':
        std::cout << "The multiplication of the number is : " << num1 * num2 << '\n';
        break;
    case '/':
        if (num2 == 0) {
            std::cout << "Error: division by zero\n";
        } else {
            std::cout << "The division of the number is : " << num1 / num2 << '\n';
        }
        break;
    case '%':
        if (num2 == 0) {
            std::cout << "Error: division by zero\n";
        } else {
            std::cout << "The remainder of the number is : " << std::fmod(num1, num2) << '\n';
        }
        break;
    default:
        std::cout << "Enter a valid operator!!! you mf dumb!!!!\n";
    }

    std::cout << "********************************************************" ;
    return 0;
}