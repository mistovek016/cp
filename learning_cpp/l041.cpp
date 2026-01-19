#include <iostream>
#include <cmath>
#include <cstdlib>
#include <chrono>
#include <random>
#include <thread>
// #include <bits/stdc++.h>

int grid[3][3];
char userChar = ' ', computerChar;

void printScreen() {
    char printChar;
    std::cout << "-------------\n";
    for (auto& row : grid) {
        std::cout << "|";
        for (int col : row) {
            switch(col) {
                case 1: printChar = userChar; break;
                case -1: printChar = computerChar; break;
                default: printChar = ' '; break;
            }
            std::cout << " " << printChar << " |";
        }
        std::cout << "\n-------------\n";
    }
    std::cout << '\n';
}

void playerMove() {
    std::cout << "Your move (1 - 9): ";
    int user;
    std::cin >> user;
    user--;
    int row = user / 3, col = user % 3;
    if (grid[row][col] == 0) {
        grid[row][col] = 1; return;
    } else {
        std::cout << "\nInvalid!\n";
        playerMove();
    }
}

void computerMove() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(0, 8);
    int computer = distr(gen);

    int row = computer / 3, col = computer % 3;
    if (grid[row][col] == 0) {
        grid[row][col] = -1;
        return;
    } else computerMove();
}

bool checkTie() {
    for (auto& row : grid) {
        for (int col : row) if (col == 0) return false;
    }
    return true;
}

bool checkVerdict() {
    std::string winner = "";
    for (int i = 0; i < 3; i++) {
        int rowSum = grid[i][0] + grid[i][1] + grid[i][2];
        int colSum = grid[0][i] + grid[1][i] + grid[2][i];
        int d1 = grid[0][0] + grid[1][1] + grid[2][2];
        int d2 = grid[0][2] + grid[1][1] + grid[2][0];
        if (rowSum == 3 || colSum == 3) { winner = "You"; break; }
        else if (rowSum == -3 || colSum == -3) { winner = "Computer"; break;}
    }
    int d1 = grid[0][0] + grid[1][1] + grid[2][2];
    int d2 = grid[0][2] + grid[1][1] + grid[2][0];
    if (d1 == 3 || d2 == 3) winner = "You";
    else if (d1 == -3 || d2 == -3) winner = "Computer";

    if (!winner.empty()) {
        std::cout << "\nWINNER: " << winner << "!\n";
        return true;
    } else {
        if (checkTie()) { std::cout << "It's a tie!"; return true;}
        else return false;
    }
}

int main() {
    using namespace std::chrono_literals;
    while (userChar != 'X' && userChar != 'O') {
        std::cout << "Choose X or O: ";
        std::cin >> userChar;
        userChar = toupper(userChar);
        computerChar = userChar + (9 * (80 - userChar)/(std::abs(userChar - 80)));
    }

    printScreen();
    while(0 == 0) {
        playerMove();
        std::system("clear");
        printScreen();
        if (checkVerdict()) break;
        std::cout << "\nComputer playing...\n";
        std::this_thread::sleep_for(1500ms);
        std::system("clear");
        computerMove();
        printScreen();
        if (checkVerdict()) break;
    }
}
