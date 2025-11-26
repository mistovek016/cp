#include <iostream>

int main() {
    using std::cout, std::cin, std::endl, std::string, std::getline;
    // string name;
    // int age;
    
    // cout << "Name: ";
    // cin >> name;
    // cout << "Age: ";
    // cin >> age;
    
    // cout << "Hello " << name << "!\n";
    // cout << "You are " << age << " years old";

    /*
    Name: Aryaman
    Age: 16
    Hello Aryaman!
    You are 16 years old⏎
    */

    /*
    Name: Aryaman A
    Age: Hello Aryaman!
    You are 0 years old⏎

    cin only picks up "Aryaman"
    "A" is stored in the input buffer and gets picked up by cin >> age
    since age is an 'int' -> invalid ==> age = 0;
    */

    // string name;
    // int age;
    
    // cout << "Name: ";
    // getline(cin, name);
    // cout << "Age: ";
    // cin >> age;
    
    // cout << "Hello " << name << "!\n";
    // cout << "You are " << age << " years old";

    /*
    Name: Aryaman Aisola
    Age: 16
    Hello Aryaman Aisola!
    You are 16 years old⏎
    */

    // ------------------------------
    
    // string name;
    // int age;
    
    // cout << "Age: ";
    // cin >> age; // leaves a \n character in the input buffer
    // // switch order of prompts
    // cout << "Name: ";
    // getline(cin, name); // gets the \n character left in the input buffer by cin
    
    // cout << "Hello " << name << "!\n";
    // cout << "You are " << age << " years old";

    /*
    Age: 23
    Name: Hello !
    You are 23 years old⏎
    */

    string name;
    int age;
    
    cout << "Age: ";
    cin >> age;
    // switch order of prompts
    cout << "Name: ";
    // cin >> name;
    // getline(cin >> std::ws, name);
    
    cout << "Hello " << name << "!\n";
    cout << "You are " << age << " years old";

    /*
    Age: 16
    Name: Aryaman Aisola
    Hello Aryaman Aisola!
    You are 16 years old⏎
    */

    /*
    If we use:

    cout << "Age: ";
    cin >> age;
    cout << "Name: ";
    cin >> name;

    Then the cin does not read the \n character - it takes the first word of the text input and prints it ==> No problem;
    but using:

    getline(cin, name) --> this will read the \n character in the buffer and hence we need to use cin >> std::ws 
    */

}