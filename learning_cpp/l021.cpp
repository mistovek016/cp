#include <iostream>
#include <random>

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(1, 100);

    int num = distr(gen), guess, tries = 0;

    do {
        std::cout << "Number: ";
        std::cin >> guess;
        tries++;
        if (guess > num) std::cout << "Too high!" << '\n';
        else if (guess < num) std::cout << "Too low!" << '\n';
        else std::cout << "Yay!" << '\n';
    } while (guess != num);

    std::cout << "Number of tries: " << tries;
    return 0;
}
