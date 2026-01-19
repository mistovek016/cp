#include <iostream>
#include <vector>
#include <algorithm>

bool alternate(bool* arr, int size) {
    for (int i = 0; i < size - 1; i++) if (arr[i] != !arr[i + 1]) return false;
    return true;
}

int main() {
    int tests;
    bool* sortC = nullptr;
    bool* unsortC = nullptr;
    std::cin >> tests;
    for (int test = 0; test < tests; test++) {
        int size;
        std::cin >> size;
        std::vector<int> sorted(size);
        for (int i = 0; i < size; i++) std::cin >> sorted[i];
        std::vector<int> unsorted(sorted);
        std::sort(sorted.begin(), sorted.end());
        bool yes = false;
        for (int start = 0; start <= 1; start++) {
            sortC = new bool[size];
            unsortC = new bool[size];
            for (int i = start; i < size + start; i++) sortC[i] = (i % 2);
            for (int i = 0; i < size; i++) unsortC[i] = sortC[unsorted[i] - 1];
            if (alternate(sortC, size) && alternate(unsortC, size)) { yes = true; break; }
        }
        if (yes) std::cout << "YES\n";
        else std::cout << "NO\n";
    }
    delete[] sortC;
    delete[] unsortC;
}


// ------------------------
// true = RED
// false = BLUE
//
// 2 1 3 4
// B R B R
//
// 1 2 3 4
// R B B R
//
// 2 1 3 4
// R B R B
//
// 1 2 3 4
// B R R B
//
// 2 3 4 1
// B R B R
//
// 1 2 3 4
// R B R B
