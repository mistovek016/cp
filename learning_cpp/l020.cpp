#include <iostream>
#include <ctime>
#include <cstdlib>
#include <random>

int main() {
    using namespace std;
    cout << time(NULL) << '\n'; // time(NULL) returns the number of seconds that have passed since the UNIX epoch (00:00:00 UTC - 1st Jan, 1970)
    cout << time(0) << '\n'; // same as time(NULL)

    srand(time(NULL));
    cout << rand() % 100 + 1;


    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> intDist(1, 100);
    uniform_real_distribution<> floatDist(0.0, 1.0);
    // uniform_real_distribution<> floatDist(0, 1); // --> ALSO WORKS

    cout << intDist(gen) << '\n' << floatDist(gen) << '\n';

    // RANDOM EVENT GENERATOR
    int event = rand() % 5 + 1;
    switch(event) {
        case 1: cout << "Arch"; break;
        case 2: cout << "Ubuntu"; break;
        case 3: cout << "Debian"; break;
        case 4: cout << "Void"; break;
        case 5: cout << "Exodia"; break;
    }
    return 0;
}
