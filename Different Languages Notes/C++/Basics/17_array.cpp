#include <iostream>
#include <string>
#include <iterator>

double getTotal(double prices[], int size);
int searchElement(double prices[], int size, double element);

int main(){
    // // Array = a data structure that can hold multiple values . Values are accessed by an index number "Kind of like a variable that holds multiple values"
    
    // std::string cars[3] = {"Corvette", "Mustang", "Camry"}; // Can contain values of same datatype, [3] <-- the number inside this is the size of the array defined.

    // // std::cout << "cars"<< std::endl ; // returns a memory where our array named car is located 
    // // std::cout << cars[0] << std::endl ;
    
    // cars[0] = "Camero";
    // // std::cout << cars[0] << "\n";

    // char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    // std::string students[] = {"Sponge", "ninja", "hatodi", "doraemon","nobita"};
    
    // // std::cout << sizeof(grades) << " bytes\n";
    // // std::cout << sizeof(students) << " bytes\n";

    // // std::cout << sizeof(grades)/sizeof(char) << " Elements\n"; // To know how many elements present in a array.

    // for (int i = 0; i <sizeof(students)/sizeof(std::string); i++){
    //     std::cout << students[i]<< std::endl;
    // }

    // for (int i = 0; i< std::size(grades);i++){
    //     std::cout << grades[i] << std::endl;
    // }

    // // foreach loop = loop that erases the traversal over an iterable data set 

    // for(std::string student : students){
    //     std::cout << student << "\n";
    // }

    //Iterating  Array using a function 

    double prices[] = {49.99, 15.069, 75, 99.99};
    // int size = sizeof(prices)/sizeof(prices[1]); // We define the size here because when we try to define it inside a function, the array decays into a pointer, so sizeof no longer gives the total size of the array.
    // //A pointer is a variable that stores the memory address of another variable.
    // double total = getTotal( prices,  size);
    // std::cout << "The total price of the list is : "<< total <<"\n";

    //Search for a element in a array 
    double element;

    int size = sizeof(prices)/sizeof(double);
    std::cout << "Enter the value you want to get the position of : \n" ;
    std::cin >> element; 
    int position = searchElement(prices, size, element);
    if (position == -1){
        std::cout << "Enter a valid number which is present in the array!!";
    }
    else{
    std::cout << "The position of the value is : " << position;
    }
    return 0;
}


double getTotal(double prices[], int size){
    double total = 0;

    for ( int i = 0; i < size; i++){
        total +=prices[i];
    }

    return total;
}

int searchElement(double prices[], int size, double element){
    for (int i = 0; i < size ; i++){
        if (prices[i] == element){
            return i;
        }
    }
    return -1;
}

