#include <iostream>
#include <random>

int playerScore, computerScore;
int computerChoice();
void showOutput(int player, int computer);
int umpire(int player, int computer);
std::string mapper(int play);

// R - 1; P - 2; S - 3
// 1 - 2 = -1 (LOSE)
// 1 - 3 = -2 (WIN)
// 2 - 1 = 1 (WIN)
// 2 - 3 = -1 (LOSE)
// 3 - 1 = 2 (LOSE)
// 3 - 2 = 1 (WIN)

// 1 --> WIN
// -1 --> LOSE
// -2 --> WIN
// 2 --> LOSE

int main() {
    std::cout << "ROCK, PAPER, SCISSORS!\n----------------------------\n";
    std::cout << "Rock - R; Paper - P; Scissors - S;\n\n";
    std::cout << "Number of rounds: ";
    int rounds;
    std::cin >> rounds;

    for (int i = 0; i < rounds; i++) {
        std::cout << "ROUND " << (i + 1) << "\nYou: ";
        char choice; int playerChoice;
        std::cin >> choice;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (choice) {
            case 'R': playerChoice = 1; break;
            case 'P': playerChoice = 2; break;
            case 'S': playerChoice = 3; break;
            default: std::cout << "Invalid!\n\n"; i--; continue;
        }
        showOutput(playerChoice, computerChoice());
    }

    if (playerScore > computerScore) std::cout << "You win!!\n";
    else if (playerScore < computerScore) std::cout << "The computer wins!!\n";
    else std::cout << "It's a draw!!\n";
    return 0;
}

int umpire(int player, int computer) {
    int diff = player - computer;
    if (diff == 1 || diff == -2) {
        playerScore++;
        return 0;
    } else if (diff == -1 || diff == 2) {
        computerScore++;
        return 1;
    } else return -1;
}

int computerChoice() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(1, 3);
    return distr(gen);
}

void showOutput(int player, int computer) {
    std::cout << "Computer: " << mapper(computer) << '\n';
    switch (umpire(player, computer)) {
        case 0: std::cout << mapper(player) << " (you) wins!\n"; break;
        case 1: std::cout << mapper(computer) << " (computer) wins!\n"; break;
        case -1: std::cout << "It's a draw!\n";
    }
    std::cout << "Player: " << playerScore << "\nComputer: " << computerScore << "\n\n";
}

std::string mapper(int play) {
    switch (play) {
        case 1: return "ROCK";
        case 2: return "PAPER";
        case 3: return "SCISSORS";
        default: return "";
    }
}
