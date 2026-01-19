#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string line;
    std::cout << "Sentence: ";
    std::getline(std::cin, line);

    line.at(0) = std::toupper(line.at(0));
    for (int i = 1; i < line.size(); i++) {
        if (line[i - 1] == ' ') {
            line.at(i) = std::toupper(line.at(i));
        }
    }
    std::cout << line;
}
