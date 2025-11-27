#include <iostream>

int main() {
    using std::cout, std::cin, std::string;
    string str0 = "Hello world!";
    
    // ----------------------------------------
    // LENGTH(), SIZE(), CAPACITY(), MAX_SIZE()
    cout << str0.length() << '\n';
    cout << str0.size() << '\n';
    // Why are there two methods for the same thing?
    // size(): used for all STL entities - like vectors, lists, etc...
    // length(): used for strings because it sounds more natural for text...

    // capacity(): how much memory the string has allocated currently
    // how many character can the string store now, before more memory has to be allocated
    // if new memory has to be allocated, then the string must be copied, and the old memory must be freed
    // this takes time - so excess memory is allocated in advance to lessen the number of reallocations
    // this is done by the standard library, which takes care of memory
    
    cout << str0.capacity() << '\n';

    // 22, 47, 95, 191, etc...
    // comes in these weird multiples due to the GROWTH STRATEGY used by the standard library
    // for libc++ (clang++): n_new -> 2n_old + 1
    for (int i = 0; i < 100; i++) {
        str0 += "!";
        cout << str0.capacity() << '\n';
    }

    // absolute upper limit of how many characters the string can store
    // based on system limitations, etc...
    cout << str0.max_size() << '\n';
    // ----------------------------------------

    return 0;
}

/*
length() / size()
capacity()
max_size()
append()
insert()
find()
erase()
operator[]
assign()
replace()
substr()
compare()
pop_back()
at()
back()
front()
find()
rfind()
find_first_of()
find_last_of()
find_first_not_of()
find_last_not_of()
npos
*/