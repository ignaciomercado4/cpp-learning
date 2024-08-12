#include <iostream>
#include <ctime>

void printInitMessage() {
    std::cout << "***************" << '\n';
    std::cout << "Hi! welcome to tic tac toe. To play, you'll need to select a slot to place your X!" << '\n';
    std::cout << "You can do that by typing the slot number you want to fill. These are the numbers:" << '\n';
    std::cout << '\n';
    std::cout << "1" << " | " << "2" << " | " <<  "3" << '\n';
    std::cout << "---------" << '\n';
    std::cout << "4" << " | " << "5" << " | " <<  "6" << '\n';
    std::cout << "---------" << '\n';
    std::cout << "7" << " | " << "8" << " | " <<  "9" << '\n';
    std::cout << '\n';
    std::cout << "Now, let's get crackin'." << '\n';
}

void drawBoard(char *spaces) {
    std::cout << '\n';
    std::cout << spaces[0] << " | " << spaces[1] << " | " <<  spaces[2] << '\n';
    std::cout << "---------" << '\n';
    std::cout << spaces[3] << " | " << spaces[4] << " | " <<  spaces[5] << '\n';
    std::cout << "---------" << '\n';
    std::cout << spaces[6] << " | " << spaces[7] << " | " <<  spaces[8] << '\n';
}

void playerMove(char *spaces, char player){
    int userMove = 0;
    std::cout << "Type in a number to place ur X (0-9)\n";
    drawBoard(spaces);

    while (true) {
        std::cin >> userMove;
        if (spaces[userMove - 1] == '-') {
            spaces[userMove - 1] = player;
            
            break;
        } else {
            std::cout << "Space already occupied. Select another one.\n";
        }
    }
}

void computerMove(char *spaces, char computer) {
    int computerMove;
    std::cout << "It's the computer's turn.\n";
    
    srand(time(NULL));
    
    while (true) {
        computerMove = rand() % 9;
        if (spaces[computerMove] == '-') {
            spaces[computerMove] = '0';
            std::cout << "The computer chose slot nº " << computerMove + 1 << '\n';

            break;
        }
        
    }

    drawBoard(spaces);
}

bool checkWinner(char *spaces, char computer, char player) {
    if ((spaces[0] != '-') &&
        (spaces[0] == spaces[1]) &&
        (spaces[1] == spaces[2])) {
            std::cout << spaces[0] << " WINS!\n";
            
            return true;
        }

    if ((spaces[3] != '-') &&
        (spaces[3] == spaces[4]) &&
        (spaces[4] == spaces[5])) {
            std::cout << spaces[3] << " WINS!\n";
        
            return true;
        }

    if ((spaces[6] != '-') &&
        (spaces[6] == spaces[7]) &&
        (spaces[7] == spaces[8])) {
            std::cout << spaces[6] << " WINS!\n";
        
            return true;
        }

    if ((spaces[0] != '-') &&
        (spaces[0] == spaces[3]) &&
        (spaces[3] == spaces[6])) {
            std::cout << spaces[0] << " WINS!\n";
        
            return true;
        }

    if ((spaces[1] != '-') &&
        (spaces[1] == spaces[4]) &&
        (spaces[4] == spaces[7])) {
            std::cout << spaces[1] << " WINS!\n";

            return true;
        }

    if ((spaces[2] != '-') &&
        (spaces[2] == spaces[5]) &&
        (spaces[5] == spaces[8])) {
            std::cout << spaces[2] << " WINS!\n";
        
            return true;
        }

    if ((spaces[0] != '-') &&
        (spaces[0] == spaces[4]) &&
        (spaces[4] == spaces[8])) {
            std::cout << spaces[0] << " WINS!\n";

            return true;
        }

    if ((spaces[2] != '-') &&
        (spaces[2] == spaces[4]) &&
        (spaces[4] == spaces[6])) {
            std::cout << spaces[2] << " WINS!\n";

            return true;
        }

    return false;
}

bool checkTie(char *spaces) {
    for (int i = 0; i < 9; i++) {
        if (spaces[i] == '-') {
            
            return false;
        }
    }
    std::cout << "It's a tie!\n";

    return true;
}

int main() {
    char player = 'X';
    char computer = '0';
    char spaces[] = {'-', '-', '-', '-', '-', '-', '-',  '-', '-'};
    bool running = true;

    
    printInitMessage();

    while (running) {
        playerMove(spaces, player);
        
        if (checkWinner(spaces, computer, player)) {
            running = false;

            break;
        } else if (checkTie(spaces)) {
            running = false;

            break;
        }

        computerMove(spaces, computer);
        
        if (checkWinner(spaces, computer, player)) {
            running = false;

            break;
        } else if (checkTie(spaces)) {
            running = false;

            break;
        }


    }
    
    return 0;
}