#include <iostream>
#include <cmath>
#include <string>

double square(double length);
std::string concatString(std::string str1, std::string str2);
void bakePizza(std::string topping1, std::string topping2);

int main(){
        // return = return a value back to spot where you called the encompassing function
    // double length; std::string str1, str2;
    // std::cout << "Enter the length: ";
    // std::cin >> length;

    // double area = square(length);
    // std::cout << "Area : " << area << "cm^2\n";

    // std::cout << "Enter your first name:  ";
    // std::cin >> str1;
    // std::cout << "Enter your last name:  ";
    // std::cin >> str2;
    // std::cout << "Your full name is : " << concatString(str1, str2);

    // overloaded functions -- numerous functions with same name but different number of parameters 
    bakePizza("mushroom", "chicken");

    // Local variables = declared inside a function or block {}. More secured . 
    // Global variables = declared outside of all functions . 

    return 0;
}

double square(double length){
    return length * length;
}

std::string concatString(std::string str1, std::string str2 ){
    return str1 + "  " + str2;
}

void bakePizza(){
    std::cout <<"Here is your pizza!!\n";
}

void bakePizza(std::string topping1){
    std::cout <<"Here is your pizza with topping of "<<topping1;
}

void bakePizza(std::string topping1, std::string topping2){
    std::cout << "Here is your pizza with topping of "<< topping1 <<" and " << topping2;
}

