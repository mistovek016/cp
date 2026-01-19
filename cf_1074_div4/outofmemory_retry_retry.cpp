#include <iostream>
#include <vector>

int main() {
    int tests;
    std::cin >> tests;
    for (int test = 0; test < tests; test++) {
        long long n, m, h;
        std::cin >> n >> m >> h;
        std::vector<long long> vec(n);
        for (long long i = 0; i < n; i++) std::cin >> vec[i];
        std::vector<std::vector<long long>> ops(m, std::vector<long long>(2, 0));
        long long b, c;
        int numOps = 0;
        for (int i = 0; i < m; i++) {
            std::cin >> b >> c;
            if (vec[b - 1] + c > h) {
                if (numOps != 0) {
                    for (int j = i - 1; j >= 0; j--) {
                        int bx = ops[j][0], cx = ops[j][1];
                        vec[bx - (bx == 0 ? 0 : 1)] -= cx;
                    }
                    numOps = 0;
                }
            }
            else {
                vec[b - 1] += c; numOps++;
                ops[i][0] = b; ops[i][1] = c;
            }
        }
        for (long long l : vec) std::cout << l << ' ';
        std::cout << '\n';
    }
}
