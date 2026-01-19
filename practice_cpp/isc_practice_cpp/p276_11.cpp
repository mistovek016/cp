#include <iostream>
#include <string>

std::string arrange(std::string str) {
    std::string nstr = "";
    while (!str.empty()) {
        char min = str.at(0);
        int minIndex = 0;
        for (int i = 0; i < str.size(); i++) {
            if (str.at(i) < min) {
                min = str.at(i);
                minIndex = i;
            }
        }
        nstr += min;
        str.erase(minIndex, 1);
    }
    return nstr;
}

int main() {
    std::string line, result = "";
    std::cout << "Sentence: ";
    std::getline(std::cin, line);
    line.insert(0, " ");
    bool space = true;

    for (int i = 1; i < line.size(); i++) {
        if (space) {
            if (!std::isalpha(line.at(i))) { space = true; continue; }
            else result += std::toupper(line.at(i));
        }
        space = line[i] == ' ';
    }
    
    std::cout << "The new word: " << result << '\n';
    std::cout << "Arranged in alphabetical order: " << arrange(result);
}
