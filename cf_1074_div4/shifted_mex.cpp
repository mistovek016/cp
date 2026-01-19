#include <iostream>
#include <vector>
#include <cmath>

long long mex(std::vector<long long> arr) {
    std::sort(arr.begin(), arr.end());
    long long MEX = arr.back() + 1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < 0 && arr[i + 1] < 0) continue;
        if (arr[i] >= 0 && arr[i + 1] - arr[i] > 1) { MEX = arr[i] + 1; break; }
    }
    return MEX;
}

int main() {
    int tests;
    std::cin >> tests;
    for (int test = 0; test < tests; test++) {
        bool zero = false;
        int n;
        std::cin >> n;
        std::vector<long long> vec(n);
        long long min = std::numeric_limits<long long>::max();
        long long minNeg = std::numeric_limits<long long>::max();
        for (int i = 0; i < n; i++) {
            std::cin >> vec[i];
            if (vec[i] < min) {
                if (vec[i] >= 0) min = vec[i];
                minNeg = vec[i];
            }
        }
        if (min != 0) for (int i = 0; i < n; i++) vec[i] -= min;
        else if (minNeg < 0) for (int i = 0; i < n; i++) vec[i] -= minNeg;
        for (int i : vec) if (i == 0) zero = true;
        long long MEX = zero ? mex(vec) : 0;
        std::cout << MEX << '\n';
    }
}
