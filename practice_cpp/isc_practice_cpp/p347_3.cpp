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

    // shifting is more efficient than swapping each time
    // for (int i = 1; i < size; i++) {
    //     int key = arr[i], temp = 0, j = i - 1;
    //     for(; j >= 0; j--) {
    //         if (arr[j] > key) {
    //             temp = arr[j + 1];
    //             arr[j + 1] = arr[j];
    //             arr[j] = temp;
    //         }
    //     }
    // }


    for (int i = 1; i < size; i++) {
        int key = arr[i], temp = 0, j = i - 1;
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    for (int i = 0; i < size; i++) std::cout << arr[i] << ' ';
    std::cout << "\nLowest: " << *(arr + size - 1) << "\nHighest: " << *arr;
}
