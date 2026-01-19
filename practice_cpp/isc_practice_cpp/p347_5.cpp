#include <iostream>
int main() {
    int size;
    std::cout << "Size: ";
    std::cin >> size;

    std::string* schools = nullptr;
    std::string* towns = nullptr;
    schools  = new std::string[size];
    towns  = new std::string[size];

    for (int i = 0; i < size; i++) {
        std::cout << "School " << (i + 1) << ": ";
        std::getline(std::cin >> std::ws, schools[i]);
        std::cout << "Towns " << (i + 1) << ": ";
        std::getline(std::cin, towns[i]);
    }

    std::cout << "School: ";
    std::string scl;
    std::getline(std::cin, scl);

    for (int i = 0; i < size; i++) {
        if (schools[i] == scl) { 
            std::cout << "\nSchool: " << scl << '\n';
            std::cout << "Town: " << towns[i];
            break;
        }
    }
}
