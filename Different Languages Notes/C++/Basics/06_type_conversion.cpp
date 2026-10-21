#include <iostream>

int main(){
    // type conversion = conversion a  value of one datatype to another 
    // Implicit = automatic .
    // Explicit = Precede value with new data type (int).
     
    double x = (int) 3.14 ; // Explicit Cast
    std::cout << x << "\n";
         
    char y = 100; // implicit cast 
    std::cout << y << "\n";

    int correct = 8;
    int questions = 10;
    double score = correct / (double)questions * 100;

    std::cout << score << "%" << "\n";

    return 0;
}
































