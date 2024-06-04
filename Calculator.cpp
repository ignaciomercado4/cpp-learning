#include <iostream>
#include <cmath>

int main() {
    char selectedOperator;
    double firstNumber;
    double secondNumber;

    std::cout << "Insert the operation you want to do (+, -, *, /):\n";
    std::cin >> selectedOperator;

    std::cout << "Insert the first number:\n";
    std::cin >> firstNumber;

    std::cout << "Insert the second number:\n";
    std::cin >> secondNumber;
    
    switch (selectedOperator) {
        case '+':
            std::cout << "Result: " << firstNumber + secondNumber;
            break;
        case '-':
            std::cout << "Result: " << firstNumber - secondNumber;
            break;
        case '*':
            std::cout << "Result: " << firstNumber * secondNumber;
            break;
        case '/':
            std::cout << "Result: " << firstNumber / secondNumber;
            break;
        default:
            std::cout << "Invalid inputs";
            break;
    }

    return 0;
}