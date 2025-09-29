#include <iostream>
// header file for basic I/O processes

int main() {

    std::cout << "Hello, World!\n";
    // standard character output - left shift operator - string
    std::cout << "Hello World is kinda overused, huh?" << "\n";

    std::cout << "Hello, World!" << std::endl;
    // standard character output - left shift operator - string - left shift operator - standard endline
    std::cout << "Hello World is kinda overused, huh?";

    /*
    \n
    --> does not flush the output buffer (the text printed may stay in buffer until cleared)
    --> generally better for performance

    std::endl
    --> flushes the output buffer
    --> may be slower
    --> used when taking input right after printing something, etc
    */
    return 0;
}
