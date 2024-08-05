#include <iostream>

int main() {
    int array[] = {1, 2, 30, 13, 2, 78, 5, 100, 78};
    for (int numero : array){
        std::cout << numero << '\n';
    }

    int temp;

    for (int i = 0; i < sizeof(array) / sizeof(array[0]) - 1; i++) {
        for (int j = 0; j < sizeof(array) / sizeof(array[0]) - i - 1 ; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    std::cout << "************" << '\n';

    for (int numero : array){
            std::cout << numero << '\n';
        }
    
}