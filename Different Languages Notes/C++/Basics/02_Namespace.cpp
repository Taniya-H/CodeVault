#include <iostream>

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main(){
    // // Namespaces = provides a solution for preventing the name  conflicts in larger projects. Each entity needs a unique name. A namespace allows for identically named entities as long as the namespace are different. 
    // // ************************** USING PREFIX ***********************************
    // int x = 0;
    // std::cout << x << "\n" ; // If the namespace is not explicitly mentioned it will print out the local version
    // std::cout << first::x  << "\n" ; // :: -> acope resolution operator, this line is refering to the x to the first namespace 
    // std::cout << second::x << "\n" ;
    // ************************** WITHOUT PREFIX **********************************
    using namespace first;
    std::cout << x ;
    return 0;

}























