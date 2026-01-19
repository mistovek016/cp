#include <iostream>
int main() {
    int size;
    std::cout << "Size: ";
    std::cin >> size;

    std::string* cities = nullptr;
    int* std = nullptr;
    cities  = new std::string[size];
    std  = new int[size];

    for (int i = 0; i < size; i++) {
        std::cout << "City " << (i + 1) << ": ";
        std::getline(std::cin >> std::ws, cities[i]);
        std::cout << "STD Code " << (i + 1) << ": ";
        std::cin >> std[i];
    }

    std::cout << "City: ";
    std::string scl;
    std::getline(std::cin >> std::ws, scl);

    for (int i = 0; i < size; i++) {
        if (cities[i] == scl) { 
            std::cout << "\nCity: " << scl << '\n';
            std::cout << "STD Code: " << std[i];
            return 0;
        }
    }
    std::cout << "Not found!";
}

