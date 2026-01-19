#include <iostream>
int main() {
    std::cout << "Array 1 Size: ";
    int size1, size2, size;
    int* arr1 = nullptr;
    int* arr2 = nullptr;
    int* arr = nullptr;
    std::cin >> size1;
    arr1 = new int[size1];
    for (int i = 0; i < size1; i++) {
        std::cout << "Element " << (i + 1) << ": ";
        std::cin >> arr1[i];
    }

    std::cout << "Array 2 Size: ";
    std::cin >> size2;
    arr2 = new int[size2];
    for (int i = 0; i < size2; i++) {
        std::cout << "Element " << (i + 1) << ": ";
        std::cin >> arr2[i];
    }

    size = size1 + size2;
    arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = (i >= size1 ? arr2[i - size1] : arr1[i]);
        std::cout << arr[i] << ' ';
    }

    for (int i = 0; i < size - 1; i++) {
        int minIndex = i, temp;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) minIndex = j;
        }
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }

    std::cout << '\n';
    for (int i = 0; i < size; i++) std::cout << arr[i] << ' ';
}
