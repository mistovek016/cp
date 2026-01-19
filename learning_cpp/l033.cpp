#include <iostream>

int main() {
    int nums[][4] = {{1, 3, 5, 7},
                    {0, 2, 4, 6},
                    {2, 3, 5, 7}};

    std::string names[] = {"Even", "Odd", "Prime"};

    int rows = sizeof(nums)/sizeof(nums[0]);
    int cols = sizeof(nums[0])/sizeof(nums[0][0]);

    for (int i = 0; i < rows; i++) {
        std::cout << names[i] << ": ";
        for (int j = 0; j < cols; j++) std::cout << nums[i][j] << " ";
        std::cout << '\n';
    }
}
