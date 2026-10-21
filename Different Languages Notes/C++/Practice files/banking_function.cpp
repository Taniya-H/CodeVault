#include <iostream>
#include <string>
#include <cmath>
#include <iomanip> // used to set the precision for the float point numbers.

// deposit money withdraw money or show balance

double withdraw(double balance, double amount);
double deposit(double balance,double amount);

int main(){
    double amount, balance ; 
    int process;
    std::cout << "*********************  TANIYA BANK OF INDIA  *************************************\n";
    do{std::cout << "Enter the current balance in your account : \n";
    std::cin >> balance;
    }while(balance <0);
    
    do{
            std::cout << "Enter 1 if you wanna either deposit or 0 if you wanna withdraw money or anything else if you wanna see balance(Enter -1 to exit):  \n";
            std::cin >> process;
        
            std::cin.clear();
            fflush(stdin);
            
            switch(process){
                case 0:
                    std::cout << "Enter the amount you want to withdraw: \n";
                    std::cin >> amount;
                    if (balance < amount){
                        std::cout << "Insuficient amount to be withdrawn.\n";
                    }
                    else {
                        balance = withdraw(balance, amount );
                        std::cout << "Here is your total amount. The amount left in your bank is : " << std::setprecision(2) << std::fixed << balance << std::endl;
                    }     
                    break;
                case 1 :
                    std::cout << "Enter the amount you want to deposit: \n";
                    std::cin >> amount;
                    balance = deposit(balance, amount) ;
                    std::cout << "The total balance in your account is now : " <<std::setprecision(2) << std::fixed<< balance << std::endl;
                    break;
                default:
                    std::cout << "Your current balance is : "<< balance << std::endl;
                    break;
            }
        
    }while(process!=-1);
    
    return 0;
}

double withdraw(double balance, double amount){
    balance -= amount;
    return balance  ;
}

double deposit(double balance,double amount){
    balance += amount;
    return balance;
}


