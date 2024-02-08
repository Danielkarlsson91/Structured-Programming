#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/* Write a program to let a user guess a secret random number in the range of 0 and 99.
   The user shall have a maximum of 10 attempts to guess the secret number.
   After every guess, a message should be presented informing the user if the entered value was correct, too small, or too big.
   After each game, the program shall offer a new game.
   Check for all possible errors.
*/

int main() 
{
    // Declare variables to store the random number, user's guess, and user's response for a new game
    int random;
    int guess = 0;
    int i; // Counter for the number of attempts
    char answer = 'Y'; // User's response for a new game

    // Loop for playing the game multiple times
    while (answer == 'Y')
    {
        // Seed the random number generator with the current time
        srand(time(NULL));

        // Generate a random number between 1 and 100
        random = rand() % 100 + 1;

        // Display prompt for user to guess a number
        printf("Guess a number between 0-99:\n");

        // Loop to ensure the user enters a valid number
        while (scanf("%d", &guess) != 1) {
            // Clear the input buffer
            while (getchar() != '\n');
            // Display an error message and prompt the user again
            printf("Error, please guess a number! ");
        }

        i++; // Increment the number of attempts

        // Check if the guessed number is out of range
        if (guess > 99) {
            printf("The number is too high, try again!\n");
        }

        if (guess < 0) {
            printf("The number is too low, try again!\n");
        }

        // Loop for the user to make up to 10 guesses
        while (guess != random && i != 10) {
            // Provide feedback on the guess and prompt for a new guess
            if (guess > random) {
                printf("Number is too high, try again!\n");
            } else if (guess < random) {
                printf("Number is too low, try again!\n");
            }
            scanf("%d", &guess);
            i++;
        }

        // Display the result of the game based on whether the user guessed correctly or ran out of attempts
        if (guess == random) {
            printf("Correct answer! %d number of guesses\n", i);
        } else {
            printf("You are out of guesses\n");
        }

        // Ask the user if they want to play again
        printf("Would you like to try again?\n Y/N? ");
        scanf(" %c", &answer); // Note: space before %c to consume any whitespace characters

        i = 0; // Reset the number of attempts for the next game

        // Check if the user wants to exit the program
        if (answer == 'N') {
            printf("Thank you for playing!\n");
            break;
        }
    }

    return 0;
}