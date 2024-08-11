#include <iostream>
#include <ctime>

void drawBoard(char *spaces) {
    std::cout << spaces[0] << " | " << spaces[1] << " | " <<  spaces[2] << '\n';
    std::cout << "---------" << '\n';
    std::cout << spaces[3] << " | " << spaces[4] << " | " <<  spaces[5] << '\n';
    std::cout << "---------" << '\n';
    std::cout << spaces[6] << " | " << spaces[7] << " | " <<  spaces[8] << '\n';
}

void playerMove(char *spaces, char player){
    int userMove = 0;
    std::cout << "Type in a number to place ur X\n";
    std::cin >> userMove;
    spaces[userMove - 1] = player;
    drawBoard(spaces);
}

void computerMove(char *spaces, char computer) {
    int computerMove;
    std::cout << "It's the computer's turn.\n";
    
    srand(time(NULL));
    int randomNumber = rand() % 9;
    
    std::cout << "It chose to fill the slot nº: " << computerMove << '\n';
}

int main() {
    char player = 'X';
    char computer = '0';

    char spaces[] = {'-', '-', '-', '-', '-', '-', '-',  '-', '-'};
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

    playerMove(spaces, player);
    computerMove(spaces, computer);
    
    return 0;
}