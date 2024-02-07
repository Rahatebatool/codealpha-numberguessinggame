#include <iostream>
#include <cstdlib> // added For rand() and srand()
#include <ctime>   // added For time()

using namespace std;

int main() {
    srand(time(0)); // add the random number generator with current time

    int secretNumber = rand() % 100 + 1; // Generate random numbers between (1 and 100)
    int guess;
    int tries = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have chosen a number between 1 and 100. Try to guess it!" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        tries++;

        if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << tries << " tries." << endl;
        }
    } while (guess != secretNumber);

    return 0;
}



