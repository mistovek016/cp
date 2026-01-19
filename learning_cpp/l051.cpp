#include <iostream>

class Volume {
    private:
        int volume;

    public:
    Volume() { volume = 0; }
    Volume (double volume) { this->volume = getClosestVol(volume); }

    int getClosestVol (double vol) {
        if (volume < 0) return 0;
        int lower = (int)(vol / 5), upper = lower + 1;
        if (std::abs(5 * lower - vol) <= std::abs(5 * upper - vol)) return 5 * lower;
        else return 5 * upper;
    }

    void increaseVol(double volume) { this->volume += getClosestVol(volume); if (this->volume > 100) this->volume = 100; }
    void decreaseVol(double volume) { this->volume -= getClosestVol(volume); if (this->volume < 0) this->volume = 0; }

    int currentVol() { return volume; }
};

int main() {
    Volume v1;
    std::cout << v1.currentVol() << '\n';
    v1.increaseVol(12.5);
    std::cout << v1.currentVol() << '\n';
    v1.decreaseVol(23423423.23);
    std::cout << v1.currentVol() << '\n';

    std::cout << '\n';

    Volume v2(21.2354);
    std::cout << v2.currentVol() << '\n';
    v2.increaseVol(-12.5);
    std::cout << v1.currentVol() << '\n';
    v1.increaseVol(33.33);
    std::cout << v1.currentVol() << '\n';

}
