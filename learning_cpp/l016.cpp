#include <iostream>

int main () {
    using std::cout, std::cin, std::string;
    string name;
    cout << "Name: ";
    std::getline(cin, name);
    if (name.length() > 15) cout << "Your name cannot be over 15 characters long!";
    if (name.empty()) cout << "You don't have a name bro?";
    else cout << "Welcome " << name << "!\n";

    // name.clear();
    // cout << "Hello " << name << "!\n";

    // name.append("@gmail.com");
    // cout << "Email: " << name << '\n';
    // cout << name.at(0) << '\n';

    // name.insert(0, "EMAIL: ");
    // cout << name;

    // cout << name.find(' ');
    
    // WRONG - string.erase(start_index, no_of_chars_to_erase)
    // name.erase(name.find(' '), name.find(' ') + 1);
    // name.erase(1, 8);

    name.erase(7, 10);
    
    cout << name;
    return 0;
}