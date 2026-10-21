#include <iostream>

class Human{
    public:
        std::string name = "Rick";
        std::string occupation = "Student";
        int age = 17;
    
    // Methods is a function that belongs to a class . It a action which a object can perform.
    void eat(){
        std::cout << "This person is eating\n";
    }
    void drink(){
        std::cout << "This person is drinking\n";
    }
    void sleep(){
        std::cout << "This person is sleeping\n";
    }
};

int main(){
    
    // object = A collection of attributes and methods. They can have characteristics and could perform actions. Can be used to mimic real world items(ex. Phone, Book, Dog), Created from a class which acts as a "blue-print".

    Human human1;
    Human human2;

    human1.name = "Taniya";
    human1.occupation = "scientist";
    human1.age = 20;

    std::cout << human1.name << "\n";
    std::cout << human1.occupation << "\n";
    std::cout << human1.age << "\n";
    
    std::cout << human2.name << "\n";
    std::cout << human2.occupation << "\n";
    std::cout << human2.age << "\n";

    human1.eat();

    return 0;
}