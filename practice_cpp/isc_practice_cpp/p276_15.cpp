#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string line, sorted;
    std::cout << "Sentence: ";
    std::getline(std::cin, line);
    line.back() = ' ';

    while (!line.empty()) {
        int space = 0, maxIndex = 0;
        std::string maxWord = "";
        while (space < line.size() - 1) {
            std::string curWord = line.substr(space, line.find(' ', space) - space);
            curWord[0] = std::toupper(curWord[0]);
            if (curWord.size() > maxWord.size()) {
                maxWord = curWord;
                maxIndex = space;
            } else if (curWord.size() == maxWord.size()) {
                // maxWord = (curWord.compare(maxWord) > 0 ? curWord : maxWord);
                // maxIndex = (curWord.compare(maxWord) > 0 ? space : maxIndex);
                // in the above line, the value of maxWord is changing, so maxIndex will never change
                if (curWord.compare(maxWord) < 0) {
                    maxWord = curWord; maxIndex = space;
                }
            }
            space = line.find(' ', space) + 1;
        }
        // std::cout << maxWord << ", " << maxIndex <<  '\n';
        sorted.append(maxWord);
        sorted.push_back(' ');
        line.erase(maxIndex, maxWord.size() + 1);
        // std::cout << line << '\n';
    }

    sorted.back() = '.';
    std::cout << sorted;
}
