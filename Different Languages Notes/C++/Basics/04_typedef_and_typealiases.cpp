#include <iostream>
#include <vector>
#include <string>

// typedef std ::vector<std::pair<std::string, int>> pairlist_t ; // the new identifier usually ends with a "_t "
typedef std::string text_t;
using numb_t = int ;
// typedef std::cout print_t; // wont work because std::cout is a object not a type.

int main(){
    // typedef = reserved keyword used to create an additional name (alias: “Instead of typing this long annoying command, use this tiny name.” ) for another data type. New identifier for an existing type helps with the readablity and reduces types . Use when there is a clear benifit . Replaced with "using" (works better with templates.) 
    
    text_t firstName = "Bro";
    numb_t age = 21;

    std::cout << firstName << "\n";
    std::cout << age << "\n" ;

    return 0;
}


















