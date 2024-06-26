# Chuck-a-Luck Game

This is a simple console-based implementation of the Chuck-a-Luck game in C++. Chuck-a-Luck is a gambling game where players bet on the outcome of three dice rolled simultaneously.

## Getting Started

To run the Chuck-a-Luck game, you'll need a C++ compiler installed on your system. If you're using a Unix-like operating system such as Linux or macOS, you likely already have a C++ compiler installed. For Windows users, you can use an IDE like Visual Studio or install a C++ compiler such as MinGW.

### Prerequisites

- C++ compiler

### How to Compile

To compile the game, navigate to the directory containing the source files (`ChuckALuckGame.h`, `ChuckALuckGame.cpp`, and `main.cpp`) and run the following command:

```
g++ -o chuck-a-luck ChuckALuckGame.cpp main.cpp
```

### How to Run

After compiling the game, you can run it by executing the compiled executable:

```
./chuck-a-luck
```

## Gameplay

- The player starts with a balance of $1000.
- The player places bets on a number from 1 to 6.
- Three dice are rolled, and if the player's chosen number appears one or more times, they win based on the number of occurrences.
- The game continues until the player chooses to quit or runs out of money.

## Acknowledgments

- Inspired by the Chuck-a-Luck game.
- Built for educational purposes.

