#include <iostream>
#include <cmath>
#include <string>
#include <ctime>

int returnRandomInt() {
    srand(time(NULL));
    int randomInt = rand() % 3;

    return randomInt;
}

char returnRandomSign() {
    char randomSign;

    char signs[3] = {'R', 'P', 'S'};
    randomSign = signs[returnRandomInt()];

    return randomSign;
}

char getUserSign() {
    char userSign;

    std::cout << "****Select a sign between Rock, Paper or Scissors (R/P/S):****\n";
    std::cin >> userSign;

    return userSign;
}

int gameLogic() {
    std::string winner;
    char machineSign = returnRandomSign();
    char userSign = getUserSign();

    std::cout << "The machine chose: " << machineSign << "\n";
    switch (machineSign){
        case 'R':
            if (userSign == 'R') {
                std::cout << "It's a tie!";
            } else if (userSign == 'P') {
                std::cout << "You won!";
            } else {
                std::cout << "You lost. Womp womp.";
            }
            break;

        case 'P':
            if (userSign == 'P') {
                std::cout << "It's a tie!";
            } else if (userSign == 'S') {
                std::cout << "You won!";
            } else {
                std::cout << "You lost. Womp womp.";
            }
            break;

        case 'S':
            if (userSign == 'S') {
                std::cout << "It's a tie!";
            } else if (userSign == 'R') {
                std::cout << "You won!";
            } else {
                std::cout << "You lost. Womp womp.";
            }
            break;
        default:
            std::cout << "Error";
            break;
    }

    return 0;
}

int main() {
    std::cout << "\n********************************\n";
    gameLogic();
    std::cout << "\n********************************\n";
    return 0;
}


