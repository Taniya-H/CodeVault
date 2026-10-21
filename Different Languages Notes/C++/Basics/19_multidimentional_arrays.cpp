#include <iostream>
#include <string>

int main(){
    
    // multidimentional array = A 2d arrays which contains rows and columns . The first bracket contains the no of rows and the second bracket contains the no of columns.
    std::string cars[][3] = {{"Mustang", "Escape", "F-150"},
                                               {"Corvette", "Equinox", "Silverado"},
                                                {"Chalenger", "Durango", "Ram 1500"}};
    // std::cout << cars[0][0] << "\n";
    
    int rows = sizeof(cars)/ sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);
    
    for( int i = 0; i < rows; i++){
        for(int j = 0; j < rows; j++ ){
            std::cout << cars[i][j] << "  ";
        }
        std::cout << "\n";
    }

    return 0;
    }
