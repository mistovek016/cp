#include <iostream>

struct watch {
    std::string name;
    int priceInUSD;
    bool mechanical = true;
    // can set default values for fields
};

int main() {
    watch breitling;
    breitling.name = "Navitimer";
    breitling.priceInUSD = 5000;
    breitling.mechanical = true;

    watch swatch;
    swatch.name = "sr626sw";
    swatch.priceInUSD = 200;
    swatch.mechanical = false;

    watch tissot;
    tissot.name = "PRX";
    tissot.priceInUSD = 1000;
    // do not need to specify the mechanical field - already true by default
    
    std::cout << breitling.name << ", $" << breitling.priceInUSD << ", " << (breitling.mechanical ? "mechanical" : "quartz") << '\n'; 
    std::cout << swatch.name << ", $" << swatch.priceInUSD << ", " << (swatch.mechanical ? "mechanical" : "quartz") << '\n'; 
    std::cout << tissot.name << ", $" << tissot.priceInUSD << ", " << (tissot.mechanical ? "mechanical" : "quartz") << '\n'; 
}
