#include <iostream>
#include <algorithm>

int main() {
    int n1, n2, n3;
    std::cout << "Enter three numbers separated by a space:\n";
    std:: cin >> n1 >> n2 >> n3;

    std::cout << "Maximum: " << std::max(n1, std::max(n2, n3)) << '\n';
    std::cout << "Minimum: " << std::min(n1, std::min(n2, n3));
}
