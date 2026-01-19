#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string word, arranged, missing;
    std::cout << "Word: ";
    std::cin >> word;

    while (!word.empty()) {
        char min = std::toupper(word[0]); int minIndex = 0;
        for (int i = 0; i < word.size(); i++) {
            word[i] = std::toupper(word[i]);
            if (word[i] < min) {
                min = word[i];
                minIndex = i;
            }
        }
        arranged.push_back(min);
        word.erase(minIndex, 1);
    }

    for (int i = arranged.front(); i <= arranged.back(); i++) {
        if (arranged.find((char)i) == std::string::npos) {
            missing.push_back((char)i);
        }
    }

    std::cout << "Arranged: " << arranged << '\n';
    std::cout << "Missing: " << missing;
}
