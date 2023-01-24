#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_WRONG_GUESSES 6  // Maximum number of wrong guesses before the game is lost
#define MAX_WORD_LENGTH 20  // Maximum length of the word to guess

// List of possible words to choose from
const char *words[] = {
    "apple",
    "banana",
    "orange",
    "grape",
    "strawberry"
};

// Number of possible words
const int num_words = sizeof(words) / sizeof(words[0]);

// Choose a random word from the list of words
char *choose_word() {
    int index = rand() % num_words;
    return (char*)words[index];
}

// Initialize the game state
void init_game(char *word, char *guesses, int *num_guesses) {
    *num_guesses = 0;  // Initialize the number of guesses to 0
    for (int i = 0; i < strlen(word); i++) {
        guesses[i] = '_';  // Initialize the guesses to underscores
    }
    guesses[strlen(word)] = '\0';  // Add a null terminator to the end of the string
}

// Print the current game state
void print_game(char *word, char *guesses, int num_guesses) {
    printf("Word: %s\n", guesses);
    printf("Guesses: %d/%d\n", num_guesses, MAX_WRONG_GUESSES);
    printf("\n");

    // Print the hangman
    printf("  _______\n");
    printf(" |/      |\n");
    printf(" |      %c%c%c\n", (num_guesses > 0) ? '(' : ' ', (num_guesses > 0) ? '_' : ' ', (num_guesses > 0) ? ')' : ' ');
    printf(" |      %c%c%c\n", (num_guesses > 2) ? '\\' : ' ', (num_guesses > 1) ? '|' : ' ', (num_guesses > 3) ? '/' : ' ');
    printf(" |       %c\n", (num_guesses > 4) ? '|' : ' ');
    printf(" |      %c %c\n", (num_guesses > 5) ? '/' : ' ', (num_guesses > 5) ? '\\' : ' ');
    printf("_|___\n");
}

// Update the game state with a new guess
void update_game(char *word, char *guesses, int *num_guesses, char guess) {
    // Check if the guess is correct
    int correct = 0;
    for (int i = 0; i < strlen(word); i++) {
        if (word[i] == guess) {
            guesses[i] = guess;
            correct = 1;
        }
    }

    // If the guess is incorrect, increment the number of guesses
    if (!correct) {
        (*num_guesses)++;
    }
}

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Choose a random word from the list of words
    char *word = choose_word();

    // Initialize the game state
    char guesses[MAX_WORD_LENGTH + 1];  // Array to store the guesses
    int num_guesses;  // Number of wrong guesses
    init_game(word, guesses, &num_guesses);

    // Loop until the game is won or lost
    while (num_guesses < MAX_WRONG_GUESSES && strcmp(word, guesses) != 0) {
        // Print the current game state
        print_game(word, guesses, num_guesses);

        // Get the next guess from the player
        printf("Enter a letter: ");
        char guess;
        scanf(" %c", &guess);

        // Update the game state with the new guess
        update_game(word, guesses, &num_guesses, guess);
    }

    // Print the final game state
    print_game(word, guesses, num_guesses);

    // Print a message indicating whether the player won or lost
    if (num_guesses == MAX_WRONG_GUESSES) {
        printf("You lost! The word was: %s\n", word);
    } else {
        printf("You won!\n");
    }

    return 0;
}