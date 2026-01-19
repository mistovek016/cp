#include <iostream>

int main () {
   
    // PRINTS A BLANK
    // std::string distros[5];
    // distros[0] = "archlinux";
    // std::cout << distros[3];
    
    std::string distros[] = {"archlinux", "ubuntu", "debian", "void", "pop"};

    // APPROACH 1
    // offers high flexibility --> can iterate fwd, bwd, skip or other make transfers using the index
    // tedious to write and can be unnecessarily messy

    int len = sizeof(distros)/sizeof(distros[0]);
    for (int i = 0; i < len; i++) {
        std::cout << distros[i] << '\n';
    }

    std::cout << '\n';
    // APPROACH 2
    // simple and short to write
    // less flexibility: can only iterate fwd through the whole list (can still break/continue)
    for (std::string distro : distros) {

        // if (distro == "debian") continue;
        // if (distro == "debian") break;
        
        std::cout << distro << '\n';
    }
    return 0;
}
