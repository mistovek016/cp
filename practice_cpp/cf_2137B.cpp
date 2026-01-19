#include <iostream>
#include <vector>

std::vector<long long> red;
std::vector<long long> blue;

long long max(long long x, long long n) {
    long long an = x - red[n], bn = blue[n] - x; 
    if (n == red.size() - 1) return an > bn ? an : bn; 
    long long nexta = max(an, n + 1);
    long long nextb = max(bn, n + 1);
    return nexta > nextb ? nexta : nextb;
}

int main() {
    long long tests;
    std::cin >> tests;
    for (long long test = 0; test < tests; test++) {
        long long n, temp;
        std::cin >> n;
        red.clear(); blue.clear();
        for (long long i = 0; i < 2 * n; i++) {
            std::cin >> temp;
            if (i > n - 1) blue.push_back(temp); 
            else red.push_back(temp);
        }
        std::cout << max(0, 0) << '\n';
    }
}

// S   A   R
// +   +   X
// +   -   O
// -   +   X
// -   -   O
//
// S   B   R
// +   +  yea this aint workin out
//
// RECURISIVE APPROACH
// Pick A or B
// What is the max score possible with A and B, respectively
// Do a function call, passing in the scores after A and B and the subarray
// but this will be 2^n
// WAYYY TOO SLOW
// WORST CASE: 2 ^ (10 ^ 5)
