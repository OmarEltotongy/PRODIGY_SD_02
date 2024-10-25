/*
 * PRODIGY_SD_02.cpp
 *
 *  Created on: Oct 25, 2024
 *  Author: Omar Eltoutongy
 */

#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <limits> // Include this header for numeric_limits

using namespace std;

/*Function Prototypes*/

void generate_random_number();

/*Global Variables*/
int random_number = 0;
int Trials = 0;

// Main function to start the program
int main()
{
   int continue_flag = 1;
   int user_guess = 0;

   cout << "Welcome to our Guessing Game\n";

   generate_random_number();
   do
   {
      cout << "Guess a number between 0 and 100: ";

      cin >> user_guess;

      // Validate user input
      if (cin.fail() || user_guess < 0 || user_guess > 100)
      {
         cout << "Invalid input. Please enter a number between 0 and 100: ";
         cin.clear();
         cin.ignore(numeric_limits<streamsize>::max(), '\n');
         continue;
      }

      Trials++;

      if (user_guess < random_number - 20)
         cout << "u guessed much lower than the actual number. Try again.\n";
      else if (user_guess < random_number)
         cout << "u guessed a little lower than the actual number, but closer to the actual number. Try again.\n";

      else if (user_guess == random_number)
      {
         cout << "Congratulations! You guessed the correct number.\n";
         cout << "Number of attempts: " << Trials << endl;
         cout << "Do u want to play again? (y/n)\n";
         char play_again;
         cin >> play_again;
         if (play_again == 'y' || play_again == 'Y')
         {
            Trials = 0;
            generate_random_number();
            continue_flag = 1;
         }
         else if (play_again == 'n' || play_again == 'N')
         {
            cout << "Thank you for playing!\n";
            continue_flag = 0;
         }
         else
         {
            while (!(cin >> play_again) || (play_again != 'y' && play_again != 'n'))
            {
               cout << "Invalid input. Please enter 'y' or 'n'.\n";
               cin.clear();
               cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
         }
      }

      else if (user_guess > random_number + 20)
         cout << "u guessed much higher than the actual number. Try again.\n";
      else if (user_guess > random_number)
         cout << "u guessed a little higher, but close to the actual number. Try again.\n";


   } while (continue_flag != 0);

   return 0;
}

void generate_random_number(void)
{
   // Providing a seed value
   srand((unsigned)time(NULL));
   // Generating a random number between 0 and 100 (inclusive)
   random_number = rand() % 101;
  // cout << "The random number generator is: " << random_number << endl;
}