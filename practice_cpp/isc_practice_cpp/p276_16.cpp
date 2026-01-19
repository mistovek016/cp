#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string line;
    std::cout << "Sentence: ";
    std::getline(std::cin, line);

    // char maxc; int maxf = 0;
    // while (!line.empty()) {
    //     char c = line[0];
    //     int f = 0;
    //     for (int i = 0; i < line.size(); i++) {
    //         if (!std::isalpha(line[i])) {
    //             line.erase(i, 1); i--;
    //         }
    //         if (line[i] == c) {
    //             f++;
    //             line.erase(i, 1); i--;
    //         }
    //     }
    //     if (f >= maxf) {
    //         maxf = f;
    //         maxc = c;
    //     }
    // }

    char maxc; int maxf = 0;
    std::string used = "";
    for (int i = 0; i < line.size(); i++) {
        char c = line[i];
        if (!std::isalpha(c) || used.find(c) != std::string::npos) continue;
        used += c;
        int f = 0;
        for (int j = i; j < line.size(); j++) {
            if (line[j] == c) f++;
        }
        if (f >= maxf) { maxf = f; maxc = c; }
    }
    std::cout << "Character: " << maxc << "\nFrequency: " << maxf;
}
