#include <iostream>

void swap(std::string &x, std::string &y);

int main(){
    
    // memory address = a location in memory where data is stored
    // a memory address can accessed with &(address-of operator)

    std::string name = "Bro";
    int age = 21;
    bool student = true;

    std::cout << &name << "\n"; 
    // Addres of the name variable in computers memory. Numbers are likely to change everytime. These numbers are in hexadecimal

    // Pass by VALUE vs pass by REFERENCE 

    std::string x = "Kool-Aid";
    std::string y = "Water";

    std::cout << "X:  " << &x << "\n";
    std::cout << "Y:  " << &y << "\n";

    swap(x,y);

    std::cout << "X:  " << x << "\n";
    std::cout << "Y:  " << y << "\n";
    std::cout << "X:  " << &x << "\n";
    std::cout << "Y:  " << &y << "\n";


    // const parameter = parameter that is effectively read - only code is more secure and conveys intent useful for references and pointers (Nobody can change the address of the pointers. )
    
    

    return 0;
}

void swap(std::string &x, std::string &y){
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}
