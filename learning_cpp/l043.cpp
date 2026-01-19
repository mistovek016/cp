#include <iostream>

void walkIteratively(int steps) {
    for (int i = 1; i <= steps; i++) std::cout << "Taking step #" << i << "!\n";
    std::cout << "Walking complete!";
}

void walkRecursively(int steps, int currentStep) {
    if (steps > 0) {
        std::cout << "Taking step #" << currentStep << "!\n";
        walkRecursively(steps - 1, currentStep + 1);
    } else std::cout << "Walking complete!";
}

int factorialIteratively(long n) {
    long fact = 1;
    for (int i = n; i > 1; i--) fact *= i;
    return fact;
}

int factorialRecursively(long n) {
    if (n <= 1) return 1;
    return n * factorialRecursively(n - 1);
}

int main () {
    std::cout << "Iteratively:\n";
    walkIteratively(10);
    std::cout << "\n\nRecursively:\n";
    walkRecursively(10, 1);
    std::cout << "\n\nNumber: ";
    int num;
    std::cin >> num;
    std::cout << "\nFactorial (iterativelu): " << factorialIteratively(num);
    std::cout << "\nFactorial (recursively): " << factorialRecursively(num);
}
