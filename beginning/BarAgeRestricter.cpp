#include <iostream>
#include <cmath>

int main() {
    int age;
    const int adultAge = 18;

    std::cout << "Insert your current age: \n";
    std::cin >> age;

    if (age < 0) {
        std::cout << "You're not even born yet?";
    } else if (age < adultAge) {
        int yearsLeft = adultAge - age;
        std::cout << "You're not allowed yet, come back in " << yearsLeft << " years.";
    } else {
        std::cout << "Come in.";
    }

    return 0;
}