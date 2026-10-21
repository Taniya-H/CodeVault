#include <iostream>

struct student{
    std::string name;
    double gpa;
    bool enrolled = true;
};

struct Car{
    std::string model;
    int year;
    std::string color;
};

void printCar(Car car);

int main(){
    // struct = as structure that froup related variables under one name. structs can contain many different data types (string, int, double, bool, etc.) Variable in a struct are known as "members", members can be access with . which is known as "Class Member Access Operator"

    student student1;
    student1.name = "Spongebob" ;
    student1.gpa = 3.2; 

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';

    //Pass structs as arguments 
    
    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "red";

    car2.model = "Corvette";
    car2.year = 2024;
    car2.color = "blue";

    printCar(car1);
    printCar(car2);

    return 0;
}

void printCar(Car car){
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}