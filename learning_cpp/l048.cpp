#include <iostream>

class Laptop {
    public:
        std::string model = "H100";
        std::string company = "HP";
        int RAMgb = 8;
        bool gpu = false;

        void description() {
            std::cout << "This is a " << model << " laptop by " << company << "!\n";
            std::cout << "It has " << RAMgb << "GB of RAM and comes with" << (gpu ? "" : "out") << " a GPU :)\n\n";
        }
        
        void upgradeRAM(int ram) { RAMgb = ram; }

};

int main() {
    Laptop l1;
    l1.model = "Victus";
    l1.company = "HP";
    l1.RAMgb = 16;
    l1.gpu = true;

    l1.description();

    Laptop l2;
    l2.description();
    l2.upgradeRAM(32);
    l2.description();
}
