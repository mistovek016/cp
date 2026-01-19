#include <iostream>
#include <string>
#include <sstream>
int main() {
    std::cout << "Full Name: ";
    std::string line, name = "", prev, next;
    std::getline(std::cin, line);
    std::stringstream ss(line);
    if (ss >> prev) {
        while (ss >> next) {
            name.append(prev.append(" "));
            prev = next;
        }
        name = next.append(", ").append(name);
        std::cout << name << std::endl;
    }
}
