#include <iostream>

// double getAverage(double marks[]);
double getAverage(double marks[], int size);

int main() {
    double marks[] = {100, 100, 100, 100, 92, 90};
    double average = getAverage(marks, sizeof(marks)/sizeof(marks[0]));

    std::cout << "Average: " << average;
    return 0;
}

double getAverage (double marks[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) sum += marks[i];
    return sum * 5 / 3;
}

// when we pass an array into a function, it decays into a pointer
// so, it doesn't remember its own size anymore, and a for-each loop will not work
// either pass in the size as an argument or use std::vector

// double getAverage(double marks[]) {
//     double sum = 0;
//     for (double subject : marks) sum += subject;
//     return sum * 3 / 5;
// }
