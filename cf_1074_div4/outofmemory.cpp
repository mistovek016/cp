#include <iostream>
#include <vector>

int main() {
    int tests;
    std::cin >> tests;
    for (int test = 0; test < tests; test++) {
        long long n, m, h;
        std::cin >> n >> m >> h;
        std::vector<long long> vec(n);
        for (long long i = 0; i < n; i++) std::cin >> vec[i];
        std::vector<long long> vecCopy(vec);
        long long b, c;
        int numOps = 0;
        for (int i = 0; i < m; i++) {
            std::cin >> b >> c;
            if (vec[b - 1] + c > h) {
                if (numOps != 0) vec = vecCopy;
            }
            else { vec[b - 1] += c; numOps++; }
        }
        for (long long l : vec) std::cout << l << ' ';
        std::cout << '\n';
    }
}
