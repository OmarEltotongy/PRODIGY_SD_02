# PRODIGY_SD_02

# Guessing Game

## Description

Welcome to the Guessing Game! This is a simple console-based game where the player tries to guess a randomly generated number between 0 and 100. The game provides feedback on whether the guess is too low, too high, or correct, and it tracks the number of attempts made by the player. The player can choose to play again after each round.

## Features

- Random number generation between 0 and 100.
- User input validation to ensure guesses are within the allowed range.
- Feedback on the player's guess: too low, too high, or correct.
- Option to play again after guessing the correct number.
- Count of the number of attempts taken to guess the correct number.

## Requirements

- A C++ compiler (C++11 or later recommended).
- Standard C++ libraries.

## Installation

1. Clone the repository or download the source code file `PRODIGY_SD_02.cpp`.
2. Open a terminal or command prompt.
3. Navigate to the directory containing the `PRODIGY_SD_02.cpp` file.
4. Compile the code using your preferred C++ compiler. For example, using `g++`:

   ```bash
   g++ PRODIGY_SD_02.cpp -o GuessingGame
   ```

5. Run the compiled program:

   ```bash
   ./GuessingGame
   ```

## Usage

- When prompted, enter a number between 0 and 100.
- Follow the feedback provided by the game to adjust your guesses.
- After guessing the correct number, you can choose to play again or exit the game.

## Code Overview

- **Main Function:** The entry point of the program, where the game loop runs.
- **Input Validation:** Ensures that the user enters a valid number within the specified range.
- **Feedback Mechanism:** Provides hints based on the player's guess.
- **Random Number Generation:** The `generate_random_number` function generates a new random number for each game session.

## Contributing

Feel free to fork the repository and submit pull requests for any improvements or features you would like to add.

## Author

Omar Eltoutongy
