#include <iostream>
#include <cmath>

int main(){
    double a, b, c;
    
    std::cout << "Enter a perpendicular of the triangle: \n";
    std::cin >> a;
    std::cout << "Enter the base of the triange: \n ";
    std::cin>>b;

    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);
    std::cout << "\nThe hypotaneous of the triangle after calculations is " << c ;
    return 0;
}