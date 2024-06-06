#include <iostream>
#include <cmath>

int main() {
    std::string name;
    std::string nameSpelling;
    int age;

    //while
    while (name.empty()) {
    std::cout << "please, type in ur name:\n";
    std::cin >> name;
    }
    
    std::cout << "hello " << name << "\n";

    //for 
    std::cout << "ur name is spelled:\n";
    
    for (int i = 0; i < name.length(); i++) {
        nameSpelling = nameSpelling + name.at(i) ;
        std::cout << nameSpelling << "\n";
    }

    do {
        std::cout << "insert an age over 35yo:\n";
        std::cin >> age;
    } while (age <= 35);

    return 0;
}