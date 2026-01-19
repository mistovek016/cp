#include <iostream>

int main () {
    std::string questions[] = {"Red + Blue = ?",
                            "Who is the King of Curses?",
                            "Which of the following uses Reversed Cursed Technique?",
                            "Furube. Yurayura. ________?"};

    std::string options[][4] = {{"Violet", "Magenta", "Mauve", "Hollow Purple"},
                                {"Gojou", "Jogo", "Sukuna", "Kenjaku"},
                                {"Blue", "Red", "Hollow Purple", "Dismantle"},
                                {"Nue", "Orochi", "Mahoraga", "Rika"}};

    char answers[] = {'D', 'C', 'B', 'C'};
    char choice;
    int len = sizeof(questions)/sizeof(questions[0]), score = 0;
    for (int i = 0; i < len; i++) {
        std::cout << i + 1 << ") " << questions[i] << '\n';
        char optChar = 'A';
        for (std::string option : options[i]) {
            std::cout << optChar << ") " << option << '\n';
            optChar++;
        }
        std::cout << '\n' << "Answer: ";
        std::cin >> choice;
        choice = toupper(choice);
        if (choice == answers[i]) {
            score++;
            std::cout << "Correct!\n\n";
        } else std::cout << "Incorrect! Answer is " << answers[i] << "\n\n";
    }

    std::cout << "Score: " << score << "/4\n";
    std::cout << "Percentage: " << (double)score * 100 / len << "%";
}
