#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class NumberGuessingGame {
private:
    int secretNumber;

public:
    NumberGuessingGame() {
        srand(time(0)); // Seed random number generator
        secretNumber = rand() % 100 + 1; // Number between 1 and 100
    }

    void play() {
        int guess;
        cout << "Guess the number between 1 and 100:\n";
        
        for (;;) { // Infinite loop until correct guess
            cout << "Enter your guess: ";
            cin >> guess;

            if (guess > secretNumber) {
                cout << "Too high! Try again.\n";
            }
            else if (guess < secretNumber) {
                cout << "Too low! Try again.\n";
            }
            else {
                cout << "Correct! You guessed the number.\n";
                break;
            }
        }
    }
};

int main() {
    NumberGuessingGame game;
    game.play();
    return 0;
}

