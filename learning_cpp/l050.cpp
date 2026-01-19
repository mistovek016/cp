#include <iostream>
#include <cmath>
#include <iomanip>

class Triangle {
    public:
        double area;

    Triangle() { area = 0; }
    Triangle(double b, double h) { area = 0.5 * b * h; }
    Triangle(double a, double b, double c) {
        double s = 0.5 * (a + b + c);
        area = s * (s - a) * (s - b) * (s - c);
        if (area >= 0) area = std::sqrt(area);
        else area = -1;
    }

    void displayArea() {
        if (area >= 0)
            std::cout << "Area: " << std::setprecision(2) << std::fixed << area << " sq. units\n";
        else std::cout << "Triangle not possible :(\n";
    }
};

int main() {
    Triangle t1;
    t1.displayArea();

    Triangle t2(3, 4);
    t2.displayArea();

    Triangle t3(3, 6, 42);
    t3.displayArea();

    Triangle t4(3, 5, 4);
    t4.displayArea();
}
