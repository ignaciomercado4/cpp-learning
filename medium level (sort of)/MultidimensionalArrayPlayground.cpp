#include <iostream>

int main() {
    std::string planes[][2] = {{"F-15", "A-10"},
                            {"F-35A", "HC-130J"},
                            {"C-12", "HH-60W"}};

    int arraySize = sizeof(planes)/sizeof(planes[0]);

    for (int i = 0; i < arraySize; i++) {
        for (int j = 0; j < sizeof(planes[i])/sizeof(std::string); j++) {
            std::cout << planes[i][j] << " ";
        }
        std::cout << '\n';
    }

    return 0;
}