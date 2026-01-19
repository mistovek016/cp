#include <iostream>
int main() {
    int upp, i = 1;
    std::cout << "Pronic Numbers\nUpper limit: ";
    std::cin >> upp;
    while (i * (i + 1) <= upp) {
        std::cout << i * (i + 1) << '\n';
        i++;
    }
}
