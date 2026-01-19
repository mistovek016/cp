#include <iostream>
#include <vector>

int mex(std::vector<int> vec) {
    bool arr[101];
    for (int i = 0; i < 101; i++) arr[i] = false;
    for (int i : vec) {
        if (i < 0) continue;
        arr[i] = true;
    }
    for (int i = 0; i < 101; i++) if (!arr[i]) return i;
    return 0;
}

bool satisfy(std::vector<int> arr) {
    for (int i = 1; i < arr.size(); i++) {
        std::vector<int> f1(arr.begin(), arr.begin() + i);
        std::vector<int> f2(arr.begin() + i, arr.end());
        if (mex(f1) == mex(f2)) return false; 
    }
    return true;
}


int numSatisfy = 0;

void getPerms(std::vector<int> arr, std::vector<int> perm, std::vector<bool> used, int n) {
    if (perm.size() == n) {
        // for (int i : perm) std::cout << i << ' ';
        // std::cout << '\n';
        if (satisfy(perm)) numSatisfy++;
        return;
    }

    for (int i = 0; i < n; i++) {
        if (!used[i] && !(i > 0 && (arr[i] == arr[i - 1]) && !used[i - 1])) {
            perm.push_back(arr[i]);
            used[i] = true;
            getPerms(arr, perm, used, n);
            used[i] = false;
            perm.pop_back();
        }
    }
}

int main() {
    int tests;
    std::cin >> tests;
    for (int test = 0; test < tests; test++) {
        numSatisfy = 0;
        int n;
        std::cin >> n;
        std::vector<int> arr(n);
        for (int i = 0; i < n; i++) std::cin >> arr[i];
        std::sort(arr.begin(), arr.end());
        std::vector<int> perm;
        std::vector<bool> used(n);
        for (int i = 0; i < n; i++) used[i] = false;
        getPerms(arr, perm, used, n);
        if (numSatisfy > 0) std::cout << "YES\n";
        else std::cout << "NO\n";
    }
}

// std::vector<int> test0 = {0, 1, 2, 3, 4, 5};
// std::vector<int> test1 = {0};
// std::vector<int> test2 = {1, 0, 5, 0, 6, 1};
// std::vector<int> test3 = {100, 101, 102, 0, -1};
// std::cout << mex(test0) << '\n';
// std::cout << mex(test1) << '\n';
// std::cout << mex(test2) << '\n';
// std::cout << mex(test3) << '\n';
