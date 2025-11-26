#include <iostream>

int main() {
    using std::cout, std::cin;
    int age;
    cout << "Age: ";
    cin >> age;
    
    if (age >= 150) cout << "How are you alive bro?";
    else if (age >= 18) cout << "You are allowed to enter!";
    else if (age >= 12) cout << "You're allowed with restrictions... :(";
    else if (age > 0) cout << "Not allowed!";
    else cout << "Bro you ain't born yet...";
    return 0;
}