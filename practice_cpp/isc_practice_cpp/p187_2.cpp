#include <iostream>

int main () {
    int n = -1;
    while (n <= 0 || n >= 10) {
        std::cout << "Digit: ";
        std::cin >> n;
        std::cin.clear(); 
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } 
    int num = n;
    for (int i = 0; i < n; i++) {
        std::cout << num << '\n';
        num = 10 * num + n;
    }
}
