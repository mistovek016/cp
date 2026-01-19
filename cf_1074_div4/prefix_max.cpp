#include <iostream>
#include <vector>

long long maxP(std::vector<long long> arr) {
    long long sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        long long max = arr[0];
        for (int j = 0; j < i + 1; j++) if (arr[j] > max) max = arr[j];
        sum += max;
    }
    return sum;
}

int main() {
    int tests;
    std::cin >> tests;
    for (int test = 0; test < tests; test++) {
        int n;
        std::cin >> n;
        std::vector<long long> vec(n);
        int max, maxIndex = 0;
        std::cin >> max;
        vec[0] = max;
        for (int i = 1; i < n; i++) {
            std::cin >> vec[i];
            if (vec[i] > max) { max = vec[i]; maxIndex = i; }
        }
        vec[maxIndex] = vec[0];
        vec[0] = max;
        std::cout << maxP(vec) << '\n';
    }
}
