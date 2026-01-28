#include <iostream>
int main() {
    long long n;
    std::cin >> n;
    switch(n) {
        case 1: std::cout << 1; break;
        case 2:;
        case 3: std::cout << "NO SOLUTION"; break;
        case 4: std::cout << "2 4 1 3"; break;
        default:
            bool rep = true;
            for (int i = 1; i <= n; i+=2) {
                std::cout << i << ' ';
                if (rep && i >= n - 1) { i = 0; rep = false; }
            }
            break;
    }
}
