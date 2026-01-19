// https://codeforces.com/problemset/problem/2181/H
#include <iostream>
#include <vector>

std::vector<int> factors(int n) {
    std::vector<int> facs;
    for (int i = 1; i <= n/2; i++) if (n % i == 0) facs.push_back(i);
    facs.push_back(n);
    return facs;
}

int main() {
    long long w, h, d, n;
    std::cin >> w >> h >> d;
    std::cin >> n;
    
    // for (long long i = 1; i <= w; i++) {
    //     if (w % i != 0) continue;
    //     for (long long j = 1; j <= h; j++) {
    //         if (h % j != 0) continue;
    //         for (long long k = 1; k <= d; k++) {
    //             if (d % k != 0) continue;
    //             if (i * j * k == n) {
    //                 std::cout << i - 1 << ' ' << j - 1 << ' ' << k - 1;
    //                 return 0;
    //             }
    //         }
    //     }
    // }
    // std::cout << -1;

    for (int wf : factors(w)) {
        for (int hf : factors(h)) {
            for (int df : factors(d)) {
                if (wf * hf * df == n) {
                    std::cout << wf - 1 << ' ' << hf - 1 << ' ' << df - 1;
                    return 0;
                }
            }
        }
    }
    std::cout << -1;
}
