#include <iostream>
#include <cmath>

int main() {
    double a;
    std::cout << "Ingrese el valor del lado a\n";
    std::cin >> a;

    double b;
    std::cout << "Ingrese el valor del lado b\n";
    std::cin >> b;

    double c;
    c = sqrt(pow(a, 2) + pow(b, 2));
    
    std::cout << "El valor de c es " << c;
    
    return 0;
}