#include <iostream>
#include <cmath>

std::string spaces(const int& a, const int& max) {
    std::string space = "";
    // if (max - a <= 0) return "";
    for (int i = 0; i <= max - a; i++) space += ' ';
    return space;
}

int main() {
    int len;
    std::cout << "Length: ";
    std::cin >> len;
    bool rep = len % 2 == 0;
    int mid = len / 2 + (rep ? 0 : 1);
    int maxlen = std::to_string(mid).size();
    maxlen += 1 - maxlen % 2;
    for (int i = 1; i <= len; i++) {
        int a = mid - std::abs(mid - i);
        std::cout << spaces(0, mid - a - 1) << spaces(std::to_string(a).size(), maxlen - 1);
        for (int j = 1; j <= a; j++) {
            std::cout << a << spaces(std::to_string(a).size(), maxlen);
            // std::cout << a << ' ';
        }
        std::cout << '\n';
    }
}
//                   1
//                 2   2  
//               3   3   3
//             4   4   4   4
//           5   5   5   5   5
//         6   6   6   6   6   6
//       7   7   7   7   7   7   7
//-----8   8   8   8   8   8   8   8 
//---9   9   9   9   9   9   9   9   9
//10  10  10  10  10  10  10  10  10  10
