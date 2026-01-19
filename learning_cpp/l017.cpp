#include <iostream>

int main() {
    // using std::cou, std::cin, std::string;
    using namespace std;
    string name;

    while (name.empty()) {
        cout << "Enter name: ";
        std::getline(cin, name);
    }

    while (1==1) cout << "HELP";
    cout << name;
    return 0;
}
