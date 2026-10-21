#include <iostream>

int main(){
    //  && = check if two conditions are true 
    // || = check if atleast one of two conditions is true
    // ! = reverses the logic state of its operand 

    int temp, maths, stats;
    std::cout << "Enter the tempurature: \n";
    std::cin >> temp;

    if (temp > 0 && temp <30){
        std::cout << "The tempurature is good!!\n";
    }
    else{
        std::cout << "The tempurature is bad\n";
    }

    std::cout << "Write the no of hours maths was studied: \n";
    std::cin >> maths;
    std::cout << "Write the number of hours stats was studied: \n";
    std::cin >> stats;
    if (maths > 0 &&  stats > 0){
        std::cout << "Good!! Keep it upp :) \n" ;
    }
    else if(maths ==0 || stats == 0){
        std::cout << "Tu tho issbarr fail paaka kregaa. dw . Teri fielding tho set hai .\n";
    }
    else {
        std::cout << "Bhar me jaaa!!!\n ";
    }

    int sunny;
    std::cout << "Enter 1 if sunny or else 0: \n";
    std::cin >> sunny;
    if(!temp){
        std::cout << "The weather is bad !!!!\n";
    }
    else{
        std::cout <<"The weather is good outside.\n";
    }


    return 0;
}