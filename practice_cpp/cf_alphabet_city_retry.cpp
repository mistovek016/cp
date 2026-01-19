#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool included(std::vector<int> mcounts, std::vector<int> kcounts) {
    for (int i = 0; i < mcounts.size(); i++) if (mcounts[i] < kcounts[i]) return false;
    return true;
}

int maxK(std::vector<char> charlist, std::vector<int> counts, std::string word, int m) {
    std::vector<char> mcharlist(charlist);
    std::vector<int> mcounts(counts);
    // for (int i = 0; i < charlist.size(); i++) {
    //     char c = charlist[i];
    //     if (word.find(c) != std::string::npos) {
    //         counts[i] = k * (counts[i] - 1) + 1;
    //         mcounts[i] = m * (mcounts[i] - 1)
    //         word.erase(word.find(c), 1);
    //     } else counts[i] *= k;
    // }
    for (int i = 0; i < word.size(); i++) {
        char c = word[i];
        auto iter = std::find(charlist.begin(), charlist.end(), c);
        int index = std::distance(charlist.begin(), iter);
        counts[index]--;
        mcounts[index]--;
    }
    for (int i = 0; i < mcharlist.size(); i++) { mcounts[i] *= m; }
    for (int k = m; k >= 0; k--) {
        std::vector<char> kcharlist(charlist);
        std::vector<int> kcounts(counts);
        for (int i = 0; i < kcharlist.size(); i++) { kcounts[i] *= k; }
        for (int i = 0; i < word.size(); i++) {
            char c = word[i];
            auto iter = std::find(kcharlist.begin(), kcharlist.end(), c);
            int index = std::distance(kcharlist.begin(), iter);
            kcounts[index]++;
        }
        if (included(mcounts, kcounts)) return k;
    }
    return -1;
}

int main() {
    int n, m;
    std::ios_base::sync_with_stdio(false);
    std::cin >> n >> m;
    std::vector<std::string> words(n);
    for (int i = 0; i < n; i++) std::cin >> words[i];
    std::vector<char> charlist;
    std::vector<int> counts;
    for (std::string str : words) {
        for (char c : str) {
            auto iter = std::find(charlist.begin(), charlist.end(), c);
            if (iter != charlist.end()) {
                int index = std::distance(charlist.begin(), iter);
                counts[index]++;
            } else {
                charlist.push_back(c);
                counts.push_back(1);
            }
        }
    }

    // for (int i = 0; i < charlist.size(); i++) {
    //     std::cout << charlist[i] << ' ' << counts[i] << '\n';
    // }
    for (std::string word : words) std::cout << maxK(charlist, counts, word, m) << ' ';

}
// first make a vector for all the unique characters
// and another vector for their counts in the main method
// pass them into the maxK method
// for each word, remove its characters counts from the vectors
// multiply each of the remaining characters counts by k
// and the words character counts
// get another set of vectors for m counts of the other characters
// iterate through them, if the difference in counts is -ve return false
// else true
// repeat for all k for each word
