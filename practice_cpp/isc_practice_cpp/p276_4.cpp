#include <iostream>
#include <string>
#include <sstream>
int main() {
    // std::string first, mid, last;
    // std::cout << "Full name: ";
    // std::cin >> first >> mid >> last;
    // std::cout << first.front() << "." << mid.front() << ". " << last;

    std::cout << "Full name: ";
    std::string line, name = "", current, prev;
    std::getline(std::cin, line);
    std::stringstream ss(line);
    if (ss >> prev) {
        while (ss >> current) {
            name += prev.at(0);
            name += '.';
            prev = current;
        }
        name.append(" " + current);
        std::cout << name << std::endl;
    }
}

