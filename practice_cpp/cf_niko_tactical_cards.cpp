#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        ll n;
        std::cin >> n;
        std::vector<ll> a(n);
        std::vector<ll> b(n);
        for (ll i = 0; i < 2 * n; i++) {
            if (i < n) std::cin >> a[i];
            else std::cin >> b[i - n];
        }
        // simple greedy doesn't work
        // why?
        // because of the blue card which has a -ve sign on the score

        ll max = 0, min = 0, temp = 0;
        for (ll i = 0; i < n; i++) {
            temp = std::max(max - a[i], b[i] - min);
            min = std::min(min - a[i], b[i] - max);
            max = temp;
        }
        std::cout << max << '\n';
    }
}
