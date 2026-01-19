#include <iostream>
#include <random>

bool isHeads() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(1, 2);
    return distr(gen) == 1;
}

int main() {
    int trials, heads = 0, tails;
    std::cout << "Number of coin flips: ";
    std::cin >> trials;
    for (int i = 1; i <= trials; i++) if (isHeads()) heads++;
    std::cout << "Heads: " << heads << "\nTails: " << trials - heads << '\n';
    std::cout << "P(H): " << (double)heads/trials << "\nP(T): " << (double)(trials - heads)/trials << '\n';
    return 0;
}
