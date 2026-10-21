#include <iostream>

template <typename T>
T max(T x, T y){
    return (x > y) ? x : y;// Can take any datatype value of same datatype
}

template <typename T, typename U>
auto maximum(T x, U y){
    return (x > y) ? x : y; // Can take any datatype value of different datatype
}

int main(){
    // function template = describe what a function looks like. Can be used to generate as many overloaded function as needed, each using different data types .
    std::cout << max(1.1, 2.1) << "\n";
    std::cout << maximum('1', '2') << "\n";
    return 0;
}