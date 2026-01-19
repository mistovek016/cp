#include <iostream>
int main() {
    int len;
    std::cout << "Number of words: ";
    std::cin >> len;
    std::string word, max = "";
    for (int i = 1;i <= len; i++) {
        std::cout << "Word " << i << ": ";
        std::cin >> word;
        if (word.size() >= max.size()) max = word;
    }

    std::cout << "Max Word: " << max << '\n';
    std::cout << "Max Length: " << max.size();
}
