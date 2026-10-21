#include <iostream>
#include <string>
#include <cmath>

int main(){
//     // While loop : A while loop is a control structure that repeatedly executes a block of code as long as a condition remains true.
//     std::string name;
    
//     while(name.empty()){
//         std::cout << "Enter your name: \n";
//         std::getline(std::cin, name);
//     }

//     std::cout << "Hello " << name;
    // Do while loop : do some block of code first and THEN repeat again if the condition is true.
    // int number;
    
    // do{
    //     std::cout << "Enter a positive number: \n";
    //     std::cin >> number;
    // }while(number < 0);

    // For loops: A for loop is a control structure used to repeat a block of code a specific number of times or iterate over a sequence (such as a list, string, tuple, etc.).
    // for(int i = 1; i <= 3; i++){
    //     std::cout << "HAPPY NEW YEAR!!!\n";
    // }
    
    // break = break out a loop 
    // continue = skip current iteration
    // for (int i = 1; i <= 20; ++i) {
    //     if (i == 13) {continue;}
    //     else if (i == 17) {break;}
    //     std::cout << i << '\n';
    // }

    // Nested loops : Loops inside a another loop
    int o;
    std::cout << "Enter upto the number of tables you want: \n";
    std::cin >> o;
    for (int i = 1; i <= o; i++) {
        std::cout << "Table of " << i << std::endl;
        for (int j = 1; j <= 10; j++) {
            std::cout << i << " X " << j << " = " << i * j << std::endl;
        }
    }

    return 0;
}