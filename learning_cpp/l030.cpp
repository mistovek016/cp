#include <iostream>

int main() {
    int arr[] = {4, 7, 3, 6, 8, 0, 2, 1, 9, 5};
    int len = sizeof(arr)/sizeof(arr[0]);
    int temp = 0;
    bool sorted = true;
    
    std::cout << "Unsorted: ";
    for (int n : arr) std::cout << n << " ";
    std::cout << '\n';

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                sorted = false;
            }
        }
        if (sorted) break;
    }
    
    std::cout << "Sorted: ";
    for (int n : arr) std::cout << n << " ";
}
