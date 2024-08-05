#include <iostream>


void fizzBuzz (int number) {
    for (int i = 0; i <= number; i++) {
    
        if (i % 5 == 0 & i % 3 == 0) {
            std::cout << "fizzbuzz!! \n";
        } else if (i % 5 == 0) {
            std::cout << "buzz!! \n";
        } else if (i % 3 == 0) {
            std::cout << "fizz! \n";
        } else {
            std::cout << i << '\n';
        }
    }
};

int main() {
    fizzBuzz(30);
    
    return 0;
}