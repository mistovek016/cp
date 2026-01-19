//https://codeforces.com/problemset/problem/2181/A
#include <iostream>
#include <string>
#include <vector>

std::string reps(std::string str, int n) {
    std::string repeated = "";
    for (int i = 1; i <= n; i++) repeated.append(str);
    return repeated;
}

bool included(std::string superstr, std::string substr) {
    for (char c : substr) {
        if (superstr.empty()) return false;
        if (superstr.find(c) == std::string::npos) return false;
        superstr.erase(superstr.find(c), 1);
    }
    return true;
}

int maxK (int n, int m, std::vector<std::string> wordlist) {
    std::string current = wordlist[n];
    std::string others, repeated;
    
    for (int i = 0; i < wordlist.size(); i++) {
        if (i != n) others.append(wordlist[i]);
    }
    
    for (int k = m; k >= 0; k--) {
        repeated = reps(others, k);
        repeated.append(current);
        if (included(reps(others, m), repeated)) return k;
        // std::cout << "Current Word: " << current << '\n';
        // std::cout << "Possible words: " << reps(others, m) << '\n';
        // std::cout << "Sublist for k=" << k << ": " << repeated << '\n';
        // std::cout << '\n';
    }
    return -1;
}

int main() {
    int n, m;
    std::ios_base::sync_with_stdio(false);
    std::cin >> n >> m;
    std::string temp;
    std::vector<std::string> words;
    for (int i = 0; i < n; i++) { 
        std::cin >> temp;
        words.push_back(temp);
    }
    for (int i = 0; i < n; i++) std::cout << maxK(i, m, words) << ' ';
}
