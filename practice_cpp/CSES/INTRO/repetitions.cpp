#include <iostream>
#include <string>
#include <algorithm>
int main() {
    std::string dna;
    std::cin >> dna;
    char prev = dna[0];
    int streak = 0, max = 0;
    for (char c : dna) {
        if (prev == c) streak++;
        else {
            max = std::max(streak, max);
            streak = 1;
            prev = c;
        }
    }
    std::cout << std::max(max, streak);
}
