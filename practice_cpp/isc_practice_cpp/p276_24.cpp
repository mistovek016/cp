#include <iostream>
#include <string>
#include <cctype>

std::string genWordList(const std::string& word) {
    int v = 0, c = 0;
    std::string vowels = "aeiou";
    for (int i = 0; i < word.size(); i++) {
        if (std::isalpha(word[i])) {
            if (vowels.find(std::tolower(word[i])) != std::string::npos) v++;
            else c++;
        }
    }
    return (word + std::string((15 - word.size()), ' ') + std::to_string(v) + "\t\t" + std::to_string(c) + "\n");
}

int main() {
    std::string line, wordlist = "";
    std::cout << "Sentence: ";
    std::getline(std::cin, line);

    if (!(line.back() == '.' || line.back() == '?')) {
        std::cout << "Invalid Sentence Termination!";
        return 0;
    } else line.back() = ' ';
    int space = 0;
    while (space < line.size() - 1) {
        line[space] = std::toupper(line[space]);
        std::string word = line.substr(space, line.find(' ', space) - space);
        wordlist.append(genWordList(word));
        space = line.find(' ', space) + 1;
    }

    line.back() = '.';
    std::cout << line << "\n";
    std::cout << "Word         Vowels\t    Consonants\n";
    std::cout << wordlist;
}
