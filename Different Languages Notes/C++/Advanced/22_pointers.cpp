#include <iostream>
#include <string>

int main(){
    // pointers = variable that stores a memory address of another variable. Sometimes its easier to work with address 

    // & address - of operator 
    // * dereference operator -- gives the value a that point 

    std::string name = "Bro";
    std::string *pName = &name;
    std::cout << *pName << "\n";

    std::string freePizza[5] = {"Pizza1","Pizza2","Pizza3","Pizza4","Pizza5"};
    std::string *pPizza = freePizza;
    std::cout << *pPizza << "\n";

    // Null value = a special value that means something has no value. When the pointer is holding a nul value, that pointer is not pointing at anything (null pointer )
    // nullptr = keyword represents a null pointer literal 
    //nullptrs are helpful when determining if an address was sucessfully assigned to a pointer.

    //When using pointers, be careful that your code isnt dereferencing nullptr or pointing to free memory. This will cause undefined behavior. 

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if (pointer == nullptr){
        std::cout << "address was not assigned!\n";
    }
    else{
        std::cout << "Address was assigned \n";
    }

    return 0;
}