#include <iostream>

int main() {
    using std::cout, std::cin;
    std::string arr[6];
    int len = sizeof(arr)/sizeof(arr[0]);

    cout << "Enter the element; 'q' to quit!\n\n";
    for (int i = 0; i < len; i++) {
        cout << "Element #" << i + 1 << ": ";
        std::getline(cin, arr[i]);
        if (arr[i] == "q") {
            arr[i].clear();
            break;
        }
    }

    for (std::string watch : arr) {
        if (!watch.empty()) cout << '\n' << watch;
    }
}
