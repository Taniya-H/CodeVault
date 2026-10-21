#include <iostream>
#include <string>
#include <limits>

int main(){
    // cout << (insertion operator )
    // cin >> (extraction operator )

    std::string name;
    int age;
    std::string nam;

    std::cout << "Whats your name? : " << "\n" ;
    std::cin >> name ;

    std::cout << "Whats your age? :\n";
    std::cin >> age;
    //std::cin.ignore();   // clears the leftover newline 

    // cin >> leaves a '\n' in the input buffer.
    // getline() reads that leftover newline immediately,
    // so use cin.ignore() before getline().
    
    // If the input string has space then it wont print anything 
    // To have solution to this, we use getline()

    std::cout << "Whats your full name?: \n" ;
    std::getline(std::cin >> std::ws, nam) ; // std::ws → automatically skips whitespace before input

    std::cout << "Hello "<< nam << "\n";
    std::cout << "Hello " << name << "\n";
    std::cout << "You are " << age << " years old" << "\n";
    

    return 0;
}






























