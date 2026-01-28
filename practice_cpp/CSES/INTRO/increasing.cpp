#include <iostream>
#include <algorithm>
typedef long long ll;
int main() {
    ll n, prev, current, diff, moves = 0;
    std::cin >> n;
    std::cin >> prev;
    while (n-- > 1) {
        std::cin >> current;
        diff = std::max(0LL, prev - current);
        moves += diff;
        prev = current + diff;
    }
    std::cout << moves;
}
