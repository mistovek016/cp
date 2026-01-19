#include <iostream>
int main() {
    int size;
    std::cout << "Size: ";
    std::cin >> size;
    int* arr = nullptr;
    arr = new int[size];
    for (int i = 0; i < size; i++) {
        std::cout << "Element " << (i + 1) << ": ";
        std::cin >> arr[i];
    }

    int element;
    std::cout << "Element: ";
    std::cin >> element;

    int high = size - 1, low = 0, mid;
    while (low <= high) {
        mid = (high + low)/2;
        if (element == arr[mid]) break;
        else if (element > arr[mid]) low = mid + 1;
        else high = mid - 1;
    }

    if (low > high) std::cout << "Element not found!";
    else {
        std::cout << "\nElement at index: " << mid + 1 << '\n';
        std::cout << "It is ";
        if (element > 0) std::cout << "+ve";
        else if (element < 0) std::cout << "-ve";
        else std::cout << "0";
        std::cout << "\nIt is " << (element % 2 == 0 ? "Even" : "Odd");
    }
}
