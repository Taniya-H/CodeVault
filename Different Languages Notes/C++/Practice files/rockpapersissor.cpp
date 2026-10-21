#include <iostream>
#include <ctime>

char getUserChoice();
void showChoice(char choice);
char getComputerChoice();
void showwinner(char player, char computer);

int main() {
    char player, computer;

    player = getUserChoice();

    std::cout << "Your choice: ";
    showChoice(player);

    computer = getComputerChoice();

    std::cout << "Computer Choice:  " ;
     showChoice(computer);

    showwinner(player, computer);

    return 0;
}

char getUserChoice() {
    std::cout << "********************* ROCK PAPER SCISSOR GAME *********************\n";
    char choice;

    do {
        std::cout << "Enter 'r' for rock\n";
        std::cout << "Enter 'p' for paper\n";
        std::cout << "Enter 's' for scissors\n";
        std::cin >> choice;
    } while (choice != 'r' && choice != 'p' && choice != 's');

    return choice;
}

void showChoice(char choice) {
    switch (choice) {
        case 'r':
            std::cout << "Rock\n";
            break;
        case 'p':
            std::cout << "Paper\n";
            break;
        case 's':
            std::cout << "Scissors\n";
            break;
    }
}

char getComputerChoice(){
    srand(time(0));
    int num =  (rand() % 3) + 1;
    switch(num){
    case 1:
        return 'r';
        break;
    case 2:
        return 'p';
        break;
    case 3:
        return 's';
        break;
    }
}

void showwinner(char player, char computer){
    if (player == computer){
        std::cout << "Draw";
    }
    else if (player == 'r' && computer == 'p' || player == 'p' && computer == 's' || player == 's' && computer == 'r'){
        std::cout << "Computer wins!!!!! ";
    }
    else{
        std::cout << "You win !!!!! . ";
    }
}