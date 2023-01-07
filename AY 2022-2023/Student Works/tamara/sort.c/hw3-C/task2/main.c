#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

#define MAX_WORD_LEN 20
#define MAX_INCORRECT_GUESSES 6

// Function prototypes
int getRandomNumber(int min, int max);
void drawStickFigure(int incorrectGuesses);
char getPlayerGuess();
bool checkGuess(char guess, char *word, char *wordState);
bool checkWin(char *word, char *wordState);

int main()
{
    // Seed the random number generator
    srand(time(0));

    // Declare an array of strings to hold the possible words to choose from
    char words[][MAX_WORD_LEN] = {"hello", "world", "hangman", "programming"};

    // Choose a random word from the array
    int wordIndex = getRandomNumber(0, sizeof(words) / sizeof(words[0]) - 1);
    char *word = words[wordIndex];

    // Initialize the array to hold the current state of the word (underscores for unguessed letters,
    // and the actual letter for guessed letters)
    char wordState[MAX_WORD_LEN];
    for (int i = 0; i < strlen(word); i++) {
        wordState[i] = '_';
    }

    // Initialize the number of incorrect guesses to 0
    int incorrectGuesses = 0;

    // Game loop
    while (incorrectGuesses < MAX_INCORRECT_GUESSES) {
        // Print the current state of the word
        printf("Word: %s\n", wordState);

        // Print the stick figure
        switch (incorrectGuesses) {
            case 0:
                printf("  ______\n");
                printf("  |     |\n");
                printf("  |\n");
                printf("  |\n");
                printf("  |\n");
                printf("  |\n");
                printf("__|__\n");
                break;
            case 1:
                printf("  ______\n");
                printf("  |     |\n");
                printf("  |     O\n");
                printf("  |\n");
                printf("  |\n");
                printf("  |\n");
                printf("__|__\n");
                break;
            case 2:
                printf("  ______\n");
                printf("  |     |\n");
                printf("  |     O\n");
                printf("  |     |\n");
                printf("  |\n");
                printf("  |\n");
                printf("__|__\n");
                break;
            case 3:
                printf("  ______\n");
                printf("  |     |\n");
                printf("  |     O\n");
                printf("  |    /|\n");
                printf("  |\n");
                printf("  |\n");
                printf("__|__\n");
                break;
                case 4:
                printf("  ______\n");
                printf("  |     |\n");
                printf("  |     O\n");
                printf("  |    /|\\\n");
                printf("  |\n");
                printf("  |\n");
                printf("__|__\n");
                break;
            case 5:
                printf("  ______\n");
                printf("  |     |\n");
                printf("  |     O\n");
                printf("  |    /|\\\n");
                printf("  |    /\n");
                printf("  |\n");
                printf("__|__\n");
                break;
            case 6:
                printf("  ______\n");
                printf("  |     |\n");
                printf("  |     O\n");
                printf("  |    /|\\\n");
                printf("  |    / \\\n");
                printf("  |\n");
                printf("__|__\n");
                break;
        }

        // Get the player's guess
        char guess = getPlayerGuess();

        // Check if the guess is correct
        bool correct = checkGuess(guess, word, wordState);
        if (!correct) {
            incorrectGuesses++;
        }

        // Check if the player has won
        if (checkWin(word, wordState)) {
            printf("Congratulations! You won!\n");
            break;
        }
    }

    // If the loop ends, the player has lost
    printf("Sorry, you lost. The word was %s.\n", word);

    return 0;
}

// Returns a random number between min and max (inclusive)
int getRandomNumber(int min, int max)
{
    return min + rand() % (max - min + 1);
}

// Gets a player's guess and returns it
char getPlayerGuess()
{
    char guess;
    printf("Enter a letter: ");
    scanf(" %c", &guess);
    return guess;
}

// Checks if a player's guess is correct. If it is, updates the wordState array with the correct
// letter. Returns true if the guess is correct, and false otherwise.
bool checkGuess(char guess, char *word, char *wordState)
{
    bool correct = false;
    for (int i = 0; i < strlen(word); i++) {
        if (word[i] == guess) {
            wordState[i] = guess;
            correct = true;
        }
    }
    return correct;
}

// Returns true if the player has won (all letters in the word have been guessed), and false
// otherwise.
bool checkWin(char *word, char *wordState)
{
    for (int i = 0; i < strlen(word); i++) {
        if (wordState[i] == '_') {
            return false;
        }
    }
    return true;
}
