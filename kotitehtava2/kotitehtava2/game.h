#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <cstdlib>
#include <ctime>

class Game {
private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;

public:
    Game(int maxNum) : maxNumber(maxNum), numOfGuesses(0) {
        std::cout << "GAME CONSTRUCTOR: initialized maximum value: " << maxNumber << std::endl;
                std::srand(std::time(0));
        randomNumber = std::rand() % maxNumber + 1;
    }

    void play() {
        std::cout << "Guess a number between 1-" << maxNumber << "." << std::endl;

            do {
            std::cout << "Your guess: ";
            std::cin >> playerGuess;
            numOfGuesses++;

            if (playerGuess < randomNumber) {
                std::cout << "The number is bigger" << std::endl;
            } else if (playerGuess > randomNumber) {
                std::cout << "The number is smaller" << std::endl;
            } else {
                std::cout << "Well done! The right number was: " << randomNumber << "." << std::endl;
                break;
            }
        } while (true);

        printGameResult();
    }

    void printGameResult() {
        std::cout << "You guessed the right answer= " << randomNumber << " with " << numOfGuesses << " guesses" << std::endl;
    }

    ~Game() {
        std::cout << "GAME DESTRUCTOR: object cleared from stack memory" << std::endl;
    }
};

#endif
