#include <iostream>
#include <iomanip>

void showBalance();
void deposit();
void withdraw();
double balance;

int main() {
    using std::cout, std::cin, std::string;
    char choice;
    cout << "Welcome!\n";
    cout << "B - Show balance\nW - Withdraw\nD - Deposit\nE - Exit\n\n";
    do {
        cout << "What would you like to do today: ";
        cin >> choice;
        cin.clear();
        // clears the failbit if invalid input and ensures that the cin is in a good state to accept future input
        // fflush(stdin);
        // the above works only on windows - not reliable
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        // the above works on all systems

        switch (choice) {
            case 'B': showBalance(); break;
            case 'W': withdraw(); break;
            case 'D': deposit(); break;
            case 'E': cout << "Thanks for visiting!"; break;
            default: cout << "Invalid input!\n\n";
        }
    } while (choice != 'E');
}

void showBalance(){
    using std::cout, std::cin;
    // std::fixed makes notation for larger doubles fixed decimal points and not scientific notation
    // 143.2354
    // (std::setprecision(2)) --> 1.4324e2
    // (std::fixed) --> 143.24
    cout << "Balance: Rs. " << std::setprecision(2) << std::fixed << balance << "\n\n"; 
}

void deposit () {
    using std::cout, std::cin;
    cout << "Amount to be deposited: Rs. ";
    double amt;
    cin >> amt;
    if (amt < 0) cout << "Invalid amount!\n";
    else balance += amt;
    showBalance();
}

void withdraw () {
    using std::cout, std::cin;
    cout << "Amount to be withdrawn: Rs. ";
    double amt;
    cin >> amt;
    if (amt < 0) cout << "Invalid amount!\n";
    else if (amt > balance) cout << "Invalid amount!\n";
    else balance -= amt;
    showBalance();
}
