#include <iostream>
#include <string>

int main(){
    
    int x; //declaration
    x = 5;//assignment 
    int y = 9;
    int sum = x+y ;
    std::cout << y << "\n";
    std::cout << x << "\n";
    std::cout << x+y << "\n";
    std::cout << sum << "\n";

    // integer (whole number)
    int age = 21;
    int year = 2023;

    // double (number including decimal)
    double pricw = 10.99;
    double gpa = 2.5;

    // char - can only store a single character 
    char grade = 'A';
    char initial = 'T';
    std::cout << initial << "\n";

    // boolean (true or false)
    bool student = true;
    bool power = true;

    // string (object that represents a sequence of text )
    std::string name = "Bro";
    std::string day = "Friday";

    std::cout << name << "\n";
    std::cout << day << "\n";
    
    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age <<" years old." << "\n";

    // The const keyword specifies that a variable's value is constant and tells the compiler to prevent anything from modifying it . (read only) 
    // The variabe name should be in capital in case to use const
    const double PI = 3.14159;
    // PI =420.69 // Throws an error because PI is a const now .
    double radius = 10;
    double circumference = 2 * pi * radius ;

    std::cout << circumference << " cm";
    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;

    // Namespaces = provides a solution for preventing the name  conflicts in larger projects. Each entity needs a unique name. A namespace allows for identically named entities as long as the namespace are different. 

    return 0;
}