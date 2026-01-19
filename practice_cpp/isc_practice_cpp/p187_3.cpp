#include <iostream>

struct Book {
    int copies;
    double price;
    double discount;
};

int main() {
    Book eng, math, cta;
    eng.discount = 5;
    cta.discount = 10;
    math.discount = 8;

    std::cout << "~ English Essay Book ~\n" << "Price: Rs. ";
    std::cin >> eng.price;
    std::cout << "Copies: ";
    std::cin >> eng.copies;

    std::cout << "\n\n~ CTA Model Test Papers ~\n" << "Price: Rs. ";
    std::cin >> cta.price;
    std::cout << "Copies: ";
    std::cin >> cta.copies;

    std::cout << "\n\n~ Mathematics Model Test Papers ~\n" << "Price: Rs. ";
    std::cin >> math.price;
    std::cout << "Copies: ";
    std::cin >> math.copies;

    eng.price = eng.copies * (eng.price * (1 - eng.discount/100));
    cta.price = cta.copies * (cta.price * (1 - cta.discount/100));
    math.price = math.copies * (math.price * (1 - math.discount/100));

    std::cout << "\n\nTotal Amount: Rs. " << (eng.price + cta.price + math.price) << " :)";
}
