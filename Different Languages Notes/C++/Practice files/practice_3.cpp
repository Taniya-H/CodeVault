#include <iostream>
#include <cmath>

int main(){
    int f,c;
    bool choice;
    std::cout << "*************** TEMPURATURE CONVERSION *******************\n" ;
    std::cout << "Enter 1 if you want to convert celsius into farhenite or else enter 0 if vice versa wanted: \n";
    std::cin >> choice;
    if (choice){
        std::cout << "Enter the tempurature in celsius: \n";
        std::cin >> c;
        std::cout << "The value in farhenite is : " << (c * (9.0/5.0) )+ 32 << std::endl;
    }
    else{
        std::cout << "Enter the tempurature in farhenite: \n";
        std::cin >> f;
        std::cout << "The value in farhenite is: " << ((f - 32)*5) / 9 << std::endl;
    }
    std::cout << "***************************************************";
    return 0;
}