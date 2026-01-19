#include <iostream>
#include <vector>

std::vector<int> merge(std::vector<int> l, std::vector<int> r) {
    std::vector<int> sorted;
    int i = 0, j = 0;
    while (i < l.size() && j < r.size()) {
        if (l.at(i) < r.at(j)) {
            sorted.push_back(l.at(i));
            i++;
        } else {
            sorted.push_back(r.at(j));
            j++;
        }
    }
    sorted.insert(sorted.end(), l.begin() + i, l.end());
    sorted.insert(sorted.end(), r.begin() + j, r.end());
    return sorted;
}

std::vector<int> mergeSort(std::vector<int> vec) {
    if (vec.size() <= 1) return vec;
    int mid = vec.size() / 2;
    std::vector<int> leftArr(vec.begin(), vec.begin() + mid);
    std::vector<int> rightArr(vec.begin() + mid, vec.end());
    return merge(mergeSort(leftArr), mergeSort(rightArr));
}

int main () {
    int size;
    std::cout << "Size: ";
    std::cin >> size;
    std::vector<int> vector(size);
    for (int i = 0; i < size; i++) {
        std::cout << "Element " << (i + 1) << ": ";
        std::cin >> vector[i];
    }
    std::cout << "\nSorted: ";
    for (int i : mergeSort(vector)) std::cout << i << " ";
}

// 
// 1 2 3
// 1 3 5 7
// 1
// 1 2 3
// 3 5 7
// 1 1
// 2 3
// 3 5 7
// 1 1 2
// 3
// 3 5 7
// 1 1 2 3
// 3
// 5 7
// 1 1 2 3 3
// -
// 5 7
