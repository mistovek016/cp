#include <iostream>

int main() {
    using std::cout, std::cin, std::string;
    // ----------------------------------------
    // INSERT
    // 1) str.insert(n, str1) --> inserts str1 at position 'n' in str
    // 2) str.insert(n, str1, start, num) --> inserts a substring of str1 - with start index 'start' and for 'num' character - at position 'n'
    // 3) str.insert(n, "c-string", num) --> inserts a substring of a C-string - with 'num' letters from the start - at position 'n'
    // 4) str.insert(n, reps, character) --> inserts a character - repeated 'reps' times - at position 'n'
    // 5) The others involve iterators - which I'll do later as I gain more proficiency
    
    string str = "C is fun";
    string str1 = "", str2 = "really";
    
    // TYPE 1
    str1 = str;
    str1.insert(5, str2.append(" "));
    cout << str1 << '\n';

    // Does it work with C-Strings? 
    // str1 = str;
    // str1.insert(5, "really ");
    // cout << str1 << '\n';

    // TYPE 2
    str1 = str;
    // str1.insert(5, str2, 2, 3).append(' ');
    // APPEND DOESN'T WORK WITH CHARS - except the repetition polymorph
    // str1.insert(5, str2, 2, 3).append(" ");
    // ^^ append doesn't work after insert?

    // str1.insert(5, str2.insert(5, ' '), 2, 3);
    // DOESNT WORK WITH CHARS ^^
    str1.insert(5, str2.insert(5, " "), 2, 4);
    cout << str1 << '\n';

    // TYPE 3
    str1 = str;
    str1.insert(5, "a lot of work", 9);
    cout << str1 << '\n';
    
    // With std::string variables - all the digits from the 'num' position are taken
    // str.insert(n, str1, num)
    str1 = str;
    string str3 = "a lot of work ";
    str1.insert(5, str3,  9);
    cout << str1 << '\n';

    // TYPE 4
    str1 = str;
    // str1.insert(str1.length() - 1, 5, '!');
    // the above ^^ won't work as intended - becasue when "!!!!!" is inserted in the last position - the last character is pushed to be after that
    // so when inserting to the last position - APPENDING - we have to use str.length();
    str1.insert(1, 2, '+');
    cout << str1 << '\n';

    // TYPE 5
    // ----------------------------------------
    return 0;
}
