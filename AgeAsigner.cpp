#include <iostream>

int main() {
    int age;
    
    std::cout << "Insert your age: \n";
    std::cin >> age;
    
    switch(age) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            std::cout << "You're a toddler";
            break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 10:
        case 11:
            std::cout << "You're a child";
            break;
        case 12:
        case 13:
        case 14:
        case 15:
            std::cout << "You're in puberty";
            break;
        case 16:
        case 17:
        case 18:
            std::cout << "You're a teen";
            break;
        default:
            std::cout << "Incorrect input";
            break;
    }

    return 0;
}
