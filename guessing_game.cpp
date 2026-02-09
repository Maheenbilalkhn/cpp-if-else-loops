#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secret = rand() % 20 + 1; // random number between 1–20
    int guess;

    cout << "Guess the number (1 to 20): ";

    while (true) {
        cin >> guess;

        if (guess == secret) {
            cout << "🎉 Correct! You guessed the number!" << endl;
            break;
        } else if (guess < secret) {
            cout << "Too low, try again: ";
        } else {
            cout << "Too high, try again: ";
        }
    }

    return 0;
}

