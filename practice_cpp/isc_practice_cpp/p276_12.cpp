#include <iostream>
#include <string>

int main() {
    std::string line, vowels = "aeiou";
    std::cout << "Sentence: ";
    std::getline(std::cin, line);

    for (int i = 0; i < line.size(); i++) {
        if (vowels.find(std::tolower(line[i])) != std::string::npos) {
            line.replace(i, 1, "*");
        }
    }
    std::cout << line;
}
