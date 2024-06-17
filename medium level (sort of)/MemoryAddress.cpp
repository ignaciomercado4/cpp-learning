#include <iostream>

int main() {
    int age = 18;
    std::string name = "john doe";
    bool isItMe = true;

    std::cout << &age << '\n';
    std::cout << &name << '\n';
    std::cout << &isItMe << '\n';

    return 0;
}
