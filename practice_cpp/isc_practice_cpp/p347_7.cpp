#include <iostream>

void fibonacci(int n, int* fib) {
    if (n <= 1) { fib[n] = n; return; }
    if (fib[n] != 0) return;
    fibonacci(n-1, fib);
    fibonacci(n-2, fib);
    fib[n] = fib[n-1] + fib[n-2];
}
int main() {
    int terms;
    std::cout << "Terms: ";
    std::cin >> terms;
    int* fib0 = nullptr;
    fib0 = new int[terms];
    fibonacci(terms, fib0);
    for (int i = 0; i < terms; i++) std::cout << fib0[i] << ' ';
    int* fib1 = nullptr;
    fib1 = new int[terms - 1];
    std::cout << '\n';
    for (int i = 0; i < terms - 1; i++) {
        fib1[i] = fib0[i + 1] - fib0[i];
        std::cout << fib1[i] << ' ';
    }
}
