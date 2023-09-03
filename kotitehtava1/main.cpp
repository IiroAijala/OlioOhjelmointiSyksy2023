#include <iostream>
#include <cstdlib>
#include <ctime>

int game (int maxnum) {

    std::srand(std::time(0));
    int answer = std::rand() % maxnum + 1;
    int guess;
    int attempts = 0;
    std::cout << "Guess a number between 1-" << maxnum << "." << std::endl;
    do {
        std::cout << "Guess: ";
        std::cin >> guess;
        attempts++;
        if (guess < answer) {
            std::cout << "Number is bigger" << std::endl;
        } else if (guess > answer) {
            std::cout << "Number is smaller" << std::endl;
        } else {
            std::cout << "Well done, you answered correctly with " << answer << "." << std::endl;
        }
    } while (guess != answer);

    return attempts;
}

int main() {
    int maxnum;
    std::cout << "Input highest number: ";
    std::cin >> maxnum;
    int attempts = game(maxnum);
    std::cout << "Used " << attempts << " attempts." << std::endl;

    return 0;
}
