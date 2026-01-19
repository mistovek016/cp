#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string line;
    std::cout << "Sentence: ";
    std::getline(std::cin, line);

    std::string reps, cons, used;
    for (int i = 0; i < line.size(); i++) {
        char c = line[i];
        if (!std::isalpha(c)) continue;
        if (i < line.size() - 1 && line[i + 1] - c == 1) {
            cons.push_back(c);
            cons.push_back(line[i + 1]);
        }
        if (used.find(c) != std::string::npos && reps.find(c) == std::string::npos) {
            reps.push_back(c);
        }
        used.push_back(c);
    }

    std::cout << "Consecutive Characters: " << cons << '\n';
    std::cout << "Repeated Characters: " << reps;
}
