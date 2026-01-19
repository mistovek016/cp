#include <iostream>
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        int max = std::numeric_limits<int>::min(), temp;
        for(int i = 0; i < n; i++) {
            std::cin >> temp;
            if (temp > max) max = temp;
        }
        std::cout << n * max << '\n'; 
    }
}
