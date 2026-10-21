#include <iostream>
#include <ctime>
#include <cstdlib>

int main(){
    
    int num, guess = 0, timing;

    srand(time(NULL));
    time;
    int randNum = rand() % 100 +1;
    std::cout << "************** NUMBER GUESSING GAME ***************\n";
    std::cout << "Enter a number between 1 to 100\n";
    std::cin >> num;

    do{
        std::cout<< "Wrong guess!!! Enter another number !!!!!\n";
        std::cin >> num;
        guess +=1;
        if(guess > 5 && num != randNum){
            std::cout<< "Hint : between " << randNum -1 << " and " << randNum + 1 << std::endl;
        }
    }while(randNum != num);

    std::cout << "Yaeyyy !!!!! You did it !!! Congrats :)\n";
    std::cout << "The total number of tries taken is :" << guess ;

    return 0;
}





























