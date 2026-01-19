#include <iostream>

int main() {
    int tests;
    std::cin >> tests;
    for (int test = 0; test < tests; test++) {
        int n;
        std::cin >> n;
        for (int i = 1; i <= n; i++) std::cout << i << ' ';
        std::cout << '\n';
    }
}
