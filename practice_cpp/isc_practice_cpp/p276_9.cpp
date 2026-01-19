#include <iostream>
#include <string>

int main() {
    std::string line;
    std::cout << "Sentence: ";
    std::getline(std::cin, line);

    for (int i = 0; i < line.size() - 1; i++) {
        if (line[i] == ' ' && line[i+1] == ' ') {
            line.erase(i, 1);
            i--;
        }
    }
    std::cout << line;
}
