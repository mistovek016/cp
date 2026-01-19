#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

std::vector<std::string> perms;
char* digits = nullptr;
bool* used = nullptr;
int len;

void getPerms(std::string n) {
    if (n.size() >= len) {
        perms.push_back(n);
        return;
    }

    for (int i = 0; i < len; i++) {
        if (!used[i] && !(i > 0 && digits[i-1] == digits[i] && !used[i-1])) {
            n.push_back(digits[i]);
            used[i] = true;
            getPerms(n);
            used[i] = false;
            n.pop_back();
        }
    }
}

int main() {
    std::string num;
    std::cout << "Sequence: ";
    std::cin >> num;
    len = num.size();
    digits = new char[len];
    used = new bool[len];
    for (int i = 0; i < len; i++) {
        digits[i] = num[i];
        used[i] = false;
    }
    std::sort(digits, digits + len);
    getPerms("");
    // for(std::string i : perms) std::cout << std::stoi(i) << '\n';
    for(std::string i : perms) std::cout << i << '\n';
    std::cout << "Total Permutations: " << perms.size();
    return 0;
}
