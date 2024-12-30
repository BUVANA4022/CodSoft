#include <iostream>
using namespace std;

// Function to handle the guessing game logic
void playGuessingGame(int rand_num) {
    int guess = 0;
    int attempts = 0;

    cout<<"------ NUMBER GUESSING GAME -------"<<endl;
    cout<<"Number Guessing Game Rules:"<<endl;
    cout<<" 1. Objective: Guess the secret number between 1 and 100."<<endl;
    cout<<" 2. Hints:"<<endl;
    cout<<"     Too low! if your guess is smaller."<<endl;
    cout<<"     Too high! if your guess is larger."<<endl;
    cout<<" 3. Win: Guess the correct number to win."<<endl;
    cout<<" 4. Attempts: Unlimited guesses allowed."<<endl;
    cout<<" 5. Input: Enter valid integers only."<<endl;
    cout<<"*BEST OF LUCK*"<<endl;


    while (guess != rand_num) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < rand_num) {
            cout << "Too low! Try again.\n";
        } else if (guess > rand_num) {
            cout << "Too high! Try again.\n";
        }
    }

    cout << "Congratulations! You guessed it in " << attempts << " attempts.\n";
    if (attempts <= 3) {
        cout << "Excellent! You're a pro at guessing.\n";
    } else if (attempts <= 7) {
        cout << "Good job! You guessed it fairly quickly.\n";
    } else {
        cout << "You made it, but try to guess faster next time.\n";
    }

}

int main() {
    int rand_num =93; 
    playGuessingGame(rand_num); 
    return 0;
}
