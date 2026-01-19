#include <iostream>
int main () {
    long long n;
    std::cout << "Number: ";
    std::cin >> n;
    char choice;
    std::cout << "Frequency (a) or Even digits (b): ";
    std::cin >> choice;
    switch(choice) {
        case 'a': {
            int digit, count = 0;
            std::cout << "Digit: ";
            std::cin >> digit;
            while (n > 0) {
                if (digit == n % 10) count++;
                n /= 10;
            }
            std::cout << "Frequency: " << count;
            break;
        }
        case 'b': {
            int sum = 0;
            while (n > 0) {
                if ((n % 10) % 2 == 0) sum += n % 10;
                n /= 10;
            }
            std::cout << "Sum of even digits: " << sum;
            break;
        }
        default: std::cout << "Invalid choice!";
    }
}
