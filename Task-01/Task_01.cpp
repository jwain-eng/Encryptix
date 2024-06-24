#include <bits/stdc++.h>
using namespace std;

int main() {
    // Seed the random number generator
    srand(chrono::system_clock::now().time_since_epoch().count());
    
    // Generate a random number between 1 and 100
    int secretNumber = rand() % 1000 + 1;
    
    int guess;
    int attempts = 0;
    
    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I'm thinking of a number between 1 and 1000.\n";
    
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;
        
        if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        } else if (guess > secretNumber) {
            cout << "Too high! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the number " << secretNumber << " correctly!\n";
            cout << "It took you " << attempts << " attempts.\n";
        }
    } while (guess != secretNumber);
    
    return 0;
}