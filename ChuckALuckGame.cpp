#include "ChuckALuckGame.h" // Include the declaration of the ChuckALuckGame class
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Constructor implementation
ChuckALuckGame::ChuckALuckGame() : balance(1000) {}

// Function to roll three dice and calculate the count of occurrences of a specific number
int ChuckALuckGame::rollDice(int number) {
    int count = 0;
    for (int i = 0; i < 3; ++i) {
        int roll = rand() % 6 + 1; // Generate a random number between 1 and 6
        if (roll == number) // If the roll matches the chosen number
            count++; // Increment the count
    }
    return count; // Return the count of occurrences
}

// Function to get the bet amount from the player
int ChuckALuckGame::getBetAmount() {
    int bet;
    cout << "Enter your bet amount (0 to quit): $";
    cin >> bet;
    if (bet <= 0) { // Validate the bet amount
        cout << "Invalid bet amount. Please enter a valid amount." << endl;
        bet = getBetAmount(); // Recursively call getBetAmount until a valid amount is entered
    }
    else if (bet > balance) { // Validate the bet amount
        cout << "Invalid bet amount. You don't have enough funds." << endl;
        bet = getBetAmount(); // Recursively call getBetAmount until a valid amount is entered
    }
    return bet; // Return the valid bet amount
}

// Function to start playing the Chuck-a-Luck game
void ChuckALuckGame::play() {
    srand(time(0)); // Seed the random number generator with the current time
    cout << "Welcome to Chuck-a-Luck!" << endl;
    cout << "You have $" << balance << " to bet." << endl;

    int chosenNumber;
    while (balance > 0) { // Continue playing while the player has a positive balance
        cout << "Enter your bet on a number (1 to 6), or 0 to quit: ";
        cin >> chosenNumber;

        if (chosenNumber == 0) { // If the player chooses to quit
            cout << "Thanks for playing! You end with $" << balance << endl;
            break;
        }

        if (chosenNumber < 1 || chosenNumber > 6) { // Validate the chosen number
            cout << "Invalid number! Please choose a number between 1 and 6." << endl;
            continue; // Skip to the next iteration of the loop
        }

        int bet = getBetAmount(); // Get the bet amount from the player
        if (bet == 0) { // If the player chooses to quit
            cout << "Thanks for playing! You end with $" << balance << endl;
            break;
        }

        int count = rollDice(chosenNumber); // Roll the dice and count the occurrences of the chosen number
        cout << "The dice rolled: " << count << " " << chosenNumber << "'s" << endl;

        if (count >= 1) { // If the chosen number appears more than once
            balance += bet * count; // Increase the balance by the winnings
            cout << "Congratulations! You win $" << bet * count << endl;
        } else { // If the chosen number doesn't appear
            balance -= bet; // Decrease the balance by the bet amount
            cout << "Sorry! You lose $" << bet << endl;
        }

        cout << "Your balance: $" << balance << endl << endl;
    }

    cout << "Game over!" << endl;
}
