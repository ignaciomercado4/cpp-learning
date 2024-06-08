#include <iostream>
#include <cmath>
#include <cstring>
#include <ctime>

char getMachineChoice() {
    char signs[3] = {'R', 'P', 'S'};  

    srand(time(NULL));
    int randomNumber = rand() % 3;
    char machineChoice = signs[randomNumber];

    return machineChoice;
}

char getUserChoice() {
    char userChoice;
    std::cout << "Insert your choice (R/P/S):\n";
    std::cin >> userChoice;

    return userChoice;
}

int gameLogic() {
    std::string winner;
    char finalMachineChoice = getMachineChoice();
    char finalUserChoice = getUserChoice();

    switch(finalMachineChoice) {
        case 'R': // logic if machine chose Rock
            if (finalUserChoice == 'R') {
                std::cout << "Machine also has chosen Rock. It's a TIE!\n";
            } else if (finalUserChoice == 'P') {
                std::cout << "Machine has chosen Rock. You WIN!\n";
            } else {
                std::cout << "Machine has chosen Rock. You LOSE!\n";
            }
            break;
        case 'P': // logic if machine chose Paper
            if (finalUserChoice == 'R') {
                std::cout << "Machine has chosen Paper. You LOSE!\n";
            } else if (finalUserChoice == 'P') {
                std::cout << "Machine has also chosen Paper. It's a TIE!\n";
            } else {
                std::cout << "Machine has chosen Paper. You WIN!\n";
            }
            break;
        case 'S': // logic if machine chose Scissors
            if (finalUserChoice == 'R') {
                std::cout << "Machine has chosen Scissors. You WIN!\n";
            } else if (finalUserChoice == 'P') {
                std::cout << "Machine has chosen Scissors. You LOSE!\n";
            } else {
                std::cout << "Machine has also chosen Scissors. It's a TIE!\n";
            }
            break;
    }

    return 0;
}

int main() {
    gameLogic();
    return 0;
}

