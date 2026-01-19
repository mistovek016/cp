#include <iostream>

// int main() {
//     int n1, n2, n3, mid;
//     std::cout << "Enter three distinct numbers separated by a space:\n";
//     std:: cin >> n1 >> n2 >> n3;
//
//     if (n1 > n2) {
//         if (n1 < n3) mid = n1;
//         else if (n2 > n3) mid = n2;
//         else mid = n3;
//     } else {
//         if (n2 < n3) mid = n2;
//         else if (n1 > n3) mid = n1;
//         else mid = n3;
//     }
//
//     std::cout << "Middle Number: " << mid;
// }

int main () {
    int n[3];
    int product;
    std::cout << "Enter three distinct numbers separated by a space:\n";
    std:: cin >> n[0] >> n[1] >> n[2];

    for (int i = 0; i < 3; i++) {
        product = 1;
        for (int j = 0; j < 3; j++) {
            if (i == j) continue;
            product *= n[i] - n[j];
        }
        if (product == 0) {
            std::cout << "Duplicates Found!";
            break;
        } else if (product < 0) std::cout << "Middle Element: " << n[i];
    }
}
