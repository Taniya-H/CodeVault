#include <iostream>

int main(){
    //if statement = do something if a condition is true. If not, then don't do it .
    
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 100){
        std::cout << "You are too old to enter this site !!! Buddha kahikaa !!! ";
    }
    else if(age >=18){
        std::cout << "You are eligible to enter this site !!! ";
    }
    else if(age < 0){
        std::cout << "You are not born yet";
    }
    else{
        std::cout << "Bhar me jaao!!! ";
    }

    //switch = alternative to using many "else if" statements complare one value against matching cases 
    int month;
    std::cout << "\nEnter the month (1-10): ";
    std::cin >> month;
    switch(month){ // Switch can only work with char, numbers, enum
        case 1:
            std::cout  << "It is January";
            break;
        case 2:
            std::cout << "It is February";
            break;
        case 3:
            std::cout << "It is March";
            break;
        case 4:
            std::cout << "It is April";
            break;
        case 5:
            std::cout << "It is May";
            break;
        case 6:
            std::cout << "It is June";
            break;
        case 7:
            std::cout << "It is July";
            break;
        case 8:
            std::cout << "It is August";
            break;
        case 9:
            std::cout << "It is September";
            break;
        case 10:
            std::cout << "It is October";
            break;
        default:
            std::cout << "Please enter in only numbers (1-10)";
    }

    return 0;
}