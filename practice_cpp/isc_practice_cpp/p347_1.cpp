#include <iostream>

int main() {
    int* arr = nullptr;
    int size;
    std::cout << "Size of array: ";
    std::cin >> size;
    arr = new int[size];
    for (int i = 0; i < size; i++) {
        std::cout << "Element " << (i + 1) << ": ";
        std::cin >> arr[i];
    }

    int po = 0, no = 0, pe = 0, ne = 0;
    for (int i = 0; i < size; i++) {
        int n = *(arr + i);
        if (n % 2 == 0) {
            if (n > 0) pe += n;
            else if (n < 0) ne += n;
        } else {
            if (n > 0) po += n;
            else if (n < 0) no += n;
        }
    }

    std::cout << "Negative Odd: " << no << '\n';
    std::cout << "Positive Odd: " << po << '\n';
    std::cout << "Negative Even: " << ne << '\n';
    std::cout << "Postive Even: " << pe << '\n';

    delete[] arr;
    arr = nullptr;
}
