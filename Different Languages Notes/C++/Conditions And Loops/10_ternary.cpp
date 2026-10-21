#include <iostream>

int main(){
    // ternary operator ?: = replacement to an if/else statement
    // condition ? expression1 : expression2;
    int grade;
    std::cout << "Enter your grade: ";
    std::cin >> grade;

    grade >=60 ? std::cout << "You pass !!!! Yaeyyyyyyy" : std::cout << "You fail";
    
    bool hungry  ;
    std::cout << "\nBhook lgi ky tujhee??(ans in 1 if hungry else 0)";
    std::cin >>  hungry;
    hungry ? std::cout << "\nKuchh khaleeee !!" : std::cout << "\nAur kitnaaa khayegii suarrr !!!!! ";
    bool khana_khaliya;
    std::cout << "\nBhaiyaa khana khaliyaa akelee akeleee??";
    std::cin >> khana_khaliya;
    khana_khaliya ? std::cout << "Bhaiyaaaa akeleee akeleeee " : std::cout << "Khalijiyee phirrr dinner.";

    return 0;
}