#include <iostream>
#include <string>

void happyirthday(std::string name, int age){
    std::cout << "Happy birthday to you!!!"<<name<< "\n";
    std::cout << "Happy birthday to you!!!"<<name<< "\n";
    std::cout << "Happy birthday to you!!!"<<name<< "\n";
    std::cout << "You are now " << age << " years old\n\n";
}

int main(){
    // function = a block of reusable code

    std::string name;
    int age;
    std::cout << "Enter your name and age : " << std::endl;
    std:: getline(std::cin , name);
    std::cout << "Enter your age:" << "\n";
    std::cin >> age;

    happyirthday(name, age);
    happyirthday(name, age);
    happyirthday(name, age);
    happyirthday(name, age);

    return 0;
}

















