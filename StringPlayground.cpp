#include <iostream>
#include <cmath>
#include <string>

int main() {
    std::string name;
    char operation;
    char response;
    int selectedChar;
    std::string textToAppend;

    std::cout << "Type in your name:\n";
    std::getline(std::cin, name);

    if (name.empty()) {
        std::cout << "Ya didn't type in your name!\n";
    
        return 0;
    } 

    std::cout << "Insert the operation you want to do ( A (append text)/C (clear)/S (select a character)):\n";
    std::cin >> operation;
    
    switch (operation) {
        case 'A':
            std::cout << "What do ya wanna append?:\n";
            std::cin.ignore();
            std::getline(std::cin, textToAppend);
            name.append(textToAppend);

            std::cout << "Ur new name is: " << name << "\n";
            break;
        case 'C':
            std::cout << "Really wanna clear ur name?" << name << " is a cool one! (Y/N)\n";
            std::cin >> response;
            
            if (response == 'Y') {
                name.clear();
                std::cout << "Ur name is '" << name << "' (blank)\n";
                break;
            } else {
                std::cout << "Ur name is still '" << name << "'\n";
                break;
            }
        case 'S':
            std::cout << "Which character of your name u want to see?" << "(1-" << name.length() + 1 << ")" <<"\n";
            std::cin >> selectedChar;
            std::cout << "The character in the position you chose is: " << name.at(selectedChar - 1); 
            break;
    }

    return 0;
}