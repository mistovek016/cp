#include <iostream>
#include <vector>
#include <string>

int main() {
    long long n, m;
    std::cin >> n >> m;
    std::string word;
    long long letterC[26] = {};
    std::vector<std::vector<long long>> matrix(n, std::vector<long long>(26, 0));
    for (long long i = 0; i < n; i++) {
        std::cin >> word;
        for (char c : word) {
            matrix[i][c - 65]++;
            letterC[c - 65]++;
        }
    } 

    for (long long l = 0; l < n; l++) {
        long long maxR = 0;
        bool possible = true;
        for (int j = 0; j < 26; j++) {
            if (matrix[l][j] == 0) continue;
            if (matrix[l][j] == letterC[j]) { possible = false; break; }
            long long r = (letterC[j] - 1)/(letterC[j] - matrix[l][j]);
            maxR = std::max(maxR, r);
        }
        long long k = m - maxR;
        if (!possible || k < 0) std::cout << -1;
        else std::cout << k;
        std::cout << ' ';
    }
}
