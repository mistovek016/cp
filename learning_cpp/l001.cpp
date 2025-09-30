#include <iostream>

int main() {
    int x = 5;
    int y = 10;
    int sum = x + y;
    int product = x * y;
    int div = x / y;
    int mod = x % y;

    int n = 9.99;
    
    std::cout << n << std::endl;
    std::cout << sum << " " << product << " " << div << " " << mod << std::endl;
    std::cout << "Input: ";
    std::cin >> x;
    std::cout << "Output: " << x;
    
    return 0;
}