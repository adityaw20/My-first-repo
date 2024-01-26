#include <iostream>
#include <cstdlib>  // for rand() and srand() functions
#include <ctime>    // for time() function

using namespace std;

// Function to get the user's choice
char getUserChoice() {
    char choice;
    cout << "Enter your choice (R for Rock, P for Paper, S for Scissors): ";
    cin >> choice;
    return toupper(choice);  // Convert to uppercase for case-insensitivity
}

// Function to generate the computer's choice
char getComputerChoice() {
    srand(time(0));  // Seed the random number generator with the current time
    int randomNum = rand() % 3;  // Generate a random number between 0 and 2

    switch (randomNum) {
        case 0:
            return 'R';
        case 1:
            return 'P';
        case 2:
            return 'S';
        default:
            return 'R';  // This should never happen
    }
}

// Function to determine the winner
void determineWinner(char userChoice, char computerChoice) {
    if (userChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if ((userChoice == 'R' && computerChoice == 'S') ||
               (userChoice == 'P' && computerChoice == 'R') ||
               (userChoice == 'S' && computerChoice == 'P')) {
        cout << "You win!" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }
}

int main() {
    char userChoice, computerChoice;

    cout << "Welcome to Rock, Paper, Scissors Game!" << endl;

    do {
        userChoice = getUserChoice();
        computerChoice = getComputerChoice();

        cout << "You chose " << userChoice << endl;
        cout << "Computer chose " << computerChoice << endl;

        determineWinner(userChoice, computerChoice);

        char playAgain;
        cout << "Do you want to play again? (Y/N): ";R
        cin >> playAgain;

        if (toupper(playAgain) != 'Y') {
            break;
        }

    } while (true);

    cout << "Thanks for playing! Goodbye." << endl;

    return 0;
}
