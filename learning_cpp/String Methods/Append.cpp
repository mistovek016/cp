#include <iostream>

int main() {
    using std::cout, std::cin, std::string;
    string str0 = "This is really cool!";
    string str1 = "Isn't it amazing?", str2 = "";
    // ----------------------------------------
    // APPEND()
    // append(string)
    // directly appends at the end
    str2 = str0;
    str2.append(" Right?");
    cout << str2 << '\n';

    // append(string, start_int, num_int)
    // appends the substring from start_int for num_int characters
    str2 = str0;
    str2.append(str1, 8, 8).append("!");
    cout << str2 << '\n';

    // ONLY FOR C-STRINGS
    // append(string, num_int) <--> append(string, 0, num_int)
    // appends first num_int characters of the given string
    str2 = str0;
    // str2.append(" ").append(str1, 0, 8).append("?"); -> This is really cool! Isn't it?
    // str2.append(" ").append(str1, 8).append("?");// -> This is really cool!  amazing??
    str2.append(" Isn't it amazing?", 9).append("?"); // C-STRINGS
    cout << str2 << '\n';

    // append(n_int, char)
    // appends the given character repeated n times
    str2 = str0;
    str2.append(10, '!');
    // str2.append(10, "!"); // WRONG - cannot take string as a parameter
    cout << str2 << '\n';

    // append(string.begin() + n, string.end() - m)
    // iterator from n to m
    str2 = str0;
    str2.append(" ").append(str1.begin() + 9, str1.end() - 1).append("!");
    // append() --> cannot take characters - only strings - except in the repetition case
    cout << str2 << '\n';
    return 0;
    // ----------------------------------------
}