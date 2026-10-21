#include <iostream>
#include <string>

int main(){
    std::string name;

    std::cout << "Enter your name:\n";
    std::getline(std::cin, name);
    
    // if (name.empty()){
    //     std::cout << "You didn't enter your name.\n";
    // }
    // else{
    //     if(name.length() > 14){ 
    //         std::cout << "Your name cant be over 12 character\n";
    //     }
    //     else{
    //         std::cout << "Welcome " << name << std::endl;
    //     }
    // }
    //name.clear(); // That clears the input 
    
    // name.insert(0, "@");
    // std::cout << name << std::endl;

    // name.append("@gmail.com");
    // std::cout << "Your user name is now " << name << std::endl;
    
    // std::cout << name.at(0) << std::endl; // Gives the single character.

    // std::cout << name.find(' '); // used to find the position of the string.
    //name.erase(0, 3); // removes the characters of the given index
    std::cout << name;

    return 0;
}

// To know more about string head to cplusplus website.