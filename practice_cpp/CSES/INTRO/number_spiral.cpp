#include <iostream>
#include <algorithm>
#include <cmath>
typedef long long ll;
int main() {
    ll t;
    std::cin >> t;
    while (t--) {
        ll row, col;
        std::cin >> row >> col;
        ll diff = row - col;
        ll x = col + std::max(0LL, diff);
        ll marker = x * x - x + 1; 
        // std::pow() --> conversion from double to long long can cause precision errors
        if (diff > 0) marker += diff * (row % 2 == 0 ? 1 : -1);
        else if (diff < 0) marker -= diff * (col % 2 == 0 ? -1 : 1);
        std::cout << marker << '\n';
    }
}

// a + b + c = 1
// 4a + 2b + c = 3
// 3a + b = 2
// 9a + 3b = 6
// 9a + 3b + c = 7
// c = 1
// a + b = 0
// b = -a
// a = 1
// x^2 -x + 1
//
