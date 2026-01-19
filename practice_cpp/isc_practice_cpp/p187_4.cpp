#include <iostream>

struct Appliance {
    int copies;
    double price;
    double discount;
};

int main() {
    Appliance micro, aircon, tele;
    micro.discount = 10;
    tele.discount = 12;
    aircon.discount = 15;

    std::cout << "~ Microwave Oven ~\n" << "Price: Rs. ";
    std::cin >> micro.price;
    std::cout << "Quantitiy: ";
    std::cin >> micro.copies;

    std::cout << "\n\n~ Air Conditioner ~\n" << "Price: Rs. ";
    std::cin >> tele.price;
    std::cout << "Quantitiy: ";
    std::cin >> tele.copies;

    std::cout << "\n\n~ Television ~\n" << "Price: Rs. ";
    std::cin >> aircon.price;
    std::cout << "Quantitiy: ";
    std::cin >> aircon.copies;

    micro.price = micro.copies * (micro.price * (1 - micro.discount/100));
    tele.price = tele.copies * (tele.price * (1 - tele.discount/100));
    aircon.price = aircon.copies * (aircon.price * (1 - aircon.discount/100));

    std::cout << "\n\nTotal Amount: Rs. " << (micro.price + tele.price + aircon.price) << " :)";
}
