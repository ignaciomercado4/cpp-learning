#include <iostream>
#include <cmath>

int main() {
    double temperature;
    char unit;
    double finalTemperature;

    std::cout << "Insert the original unit (C / F):\n";
    std::cin >> unit;

    unit = tolower(unit); // this is here to avoid possible upper/lowercase errors

    std::cout << "Insert degrees:\n";
    std::cin >> temperature;

    switch (unit) {
        case 'c':
            finalTemperature = (temperature * 9/5) + 32;
            std::cout << temperature << "C" << " degrees is equal to " << finalTemperature << "F.";
            break;
        case 'f':
            finalTemperature = (temperature - 32) * 5/9;
            std::cout << temperature << "F" << " degrees is equal to " << finalTemperature << "C.";
            break;
        default:
            std::cout << "Incorrect input(s).";
            break;
    } 

    return 0;
}
