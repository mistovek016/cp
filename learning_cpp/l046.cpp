#include <iostream>

struct pokemon {
    std::string name; 
    int evolStage;
    bool megaEvol = false;
};

void displayPoke(pokemon poke) {
    std::cout << "Function address: " << &poke << '\n';
    std::cout << "Name: " << poke.name << '\n';
    std::cout << "Evolution stage: " << poke.evolStage << '\n';
    std::cout << "Mega Evolution: " << (poke.megaEvol ? "Yes" : "No") << '\n';
}

void evolve(pokemon &poke, int evol) {
    std::cout << "Function address: " << &poke << '\n';
    poke.evolStage = evol;
}

int main() {
    pokemon charmander;
    charmander.name = "Charmiee";
    charmander.evolStage = 1;

    pokemon megaBlastoise;
    megaBlastoise.name = "Blastiie";
    megaBlastoise.evolStage = 3;
    megaBlastoise.megaEvol = true;

    std::cout << "main() Address: " << &charmander << '\n';
    displayPoke(charmander);
    std::cout << "\nmain() Address: " << &megaBlastoise << '\n';
    displayPoke(megaBlastoise);

    std::cout << "\n(Pass by reference)\nmain() Address: " << &charmander << '\n';
    evolve(charmander, 3);
    std::cout << '\n';
    displayPoke(charmander);
    
}
