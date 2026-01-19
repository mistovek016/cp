#include <iostream>
#include <vector>

// int* marks = nullptr;

std::string getGrade(const int& n) {
    if (n > 100) return "INVALID";
    if (n >= 90) return "A+";
    if (n >= 80) return "A";
    if (n >= 70) return "B+";
    if (n >= 60) return "B";
    if (n >= 50) return "C+";
    if (n >= 40) return "C";
    return "FAIL";
}

int main () {
    // int subs;
    // std::cout << "Number of subjects: ";
    // std::cin >> subs;
    // marks = new int[subs];
    // for (int i = 0; i < subs; i++) {
    //     std::cout << "Subject " << (i + 1) << " Marks: ";
    //     std::cin >> marks[i];
    // }
    //
    // std::cout << '\n';
    // for (int i = 0; i < subs; i++) std::cout << "Grade for sub. " << (i + 1) << ": " << getGrade(marks[i]) << '\n';

    int subs;
    std::cout << "Number of subjects: ";
    std::cin >> subs;
    std::vector<int> marks(subs);
    for (int i = 0; i < subs; i++) {
        std::cout << "Subject " << (i + 1) << " Marks: ";
        std::cin >> marks[i];
    }

    std::cout << '\n';
    for (int i = 0; i < subs; i++) std::cout << "Grade for sub. " << (i + 1) << ": " << getGrade(marks[i]) << '\n';
    return 0;
}
