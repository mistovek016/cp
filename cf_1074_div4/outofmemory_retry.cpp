#include <iostream>
#include <vector>

int main() {
    int tests;
    std::cin >> tests;
    long long* vec = nullptr;
    long long* vecCopy = nullptr;
    for (int test = 0; test < tests; test++) {
        long long n, m, h;
        std::cin >> n >> m >> h;
        vec = new long long[n];
        vecCopy = new long long[n];
        for (long long i = 0; i < n; i++) {
            std::cin >> vec[i];
            vecCopy[i] = vec[i];
        }
        long long b, c;
        int numOps = 0;
        for (int i = 0; i < m; i++) {
            std::cin >> b >> c;
            if (vec[b - 1] + c > h) {
                if (numOps != 0) {
                    for (int j = 0; j < n; j++) vec[j] = vecCopy[j];
                }
            }
            else { vec[b - 1] += c; numOps++; }
        }
        for (int i = 0; i < n; i++) std::cout << vec[i] << ' ';
        std::cout << '\n';
    }
    delete[] vec;
    delete[] vecCopy;
}
