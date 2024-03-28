#ifndef CHUCKALUCKGAME_H
#define CHUCKALUCKGAME_H

// Declaration of the ChuckALuckGame class
class ChuckALuckGame {
private:
    int balance; // Private member variable to store the player's balance

    // Private member functions
    int rollDice(int number); // Function to roll three dice and calculate the count of occurrences of a specific number
    int getBetAmount(); // Function to get the bet amount from the player

public:
    // Public member functions
    ChuckALuckGame(); // Constructor to initialize the game with a starting balance
    void play(); // Function to start playing the Chuck-a-Luck game
};

#endif
