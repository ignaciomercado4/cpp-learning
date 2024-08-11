#include <iostream>

int main() {
    int age = 18;
    int height = 180;
    std::string name = "Igna";
    std::string fruits[4] = {"apple", "orange", "pear", "banana"};

    // address operator * 
    // dereference operator &
    int *pAge = &age;
    int *pHeight = &height;
    std::string *pName = &name;
    std::string *pFruits = fruits;
    

    std::cout << *pAge << '\n';
    std::cout << *pHeight << '\n';
    std::cout << *pName << '\n';
    std::cout << *pFruits << '\n';
}