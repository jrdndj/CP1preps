#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_MISTAKES 6

// An array of possible words to choose from
char *words[] = {
    "apple",
    "banana",
    "orange",
    "grape",
    "mango",
    "onomatopoeia"
};

// Select a random word from the array of words
char *select_word() {
    srand(time(NULL));
    int index = rand() % (sizeof(words) / sizeof(words[0]));
    return words[index];
}

// Initialize the game state with the selected word
void init_game(char *word, char *guessed, int *mistakes) {
    *mistakes = 0;
    for (int i = 0; i < strlen(word); i++) {
        guessed[i] = '_';
    }
    guessed[strlen(word)] = '\0';
}

// Draw the hangman based on the number of mistakes
void draw_hangman(int mistakes) {
    switch (mistakes) {
        case 0:
            printf("\n\n\n\n\n");
            break;
        case 1:
            printf("\n\n\n\n ___\n");
            break;
        case 2:
            printf("\n  |\n  |\n  |\n ___\n");
            break;
        case 3:
            printf("   _________\n  |\n  |\n  |\n ___\n");
            break;
        case 4:
            printf("   _________\n  |         O\n  |\n  |\n ___\n");
            break;
        case 5:
            printf("   _________\n  |         O\n  |         |\n  |\n ___\n");
            break;
        case 6:
            printf("   _________\n  |         O\n  |         |\n  |         ^\n ___\n");
            break;
        case 7:
            printf("   _________\n  |         O\n  |         |\n  |         ^\n ___       / \\\n");
            break;
        case 8:
            printf("   _________\n  |         O\n  |         |\n  |         ^\n ___       / \\\n              \nYOU LOSE!");
            break;
        default:
            break;
    }
}

// Check if the guess is correct and update the game state
int check_guess(char guess, char *word, char *guessed, int *mistakes) {
    int correct = 0;
    for (int i = 0; i < strlen(word); i++) {
        if (guess == word[i]) {
            guessed[i] = guess;
            correct = 1;
        }
    }
    if (!correct) {
        (*mistakes)++;
    }
    return correct;
}

// Check if the player has won the game
int check_win(char *word, char *guessed) {
    return strcmp(word, guessed) == 0;
}

int main() {
    // Select a word and initialize the game
    char *word = select_word();
    char guessed[strlen(word) + 1];
    int mistakes;
    init_game(word, guessed, &mistakes);

    // Play the game
    while (mistakes < MAX_MISTAKES) {
        // Draw the hangman
        draw_hangman(mistakes);

        // Print the current guessed word
        printf("Current guess: %s\n", guessed);

        // Get the player's guess
        char guess;
        printf("Enter a letter: ");
        scanf(" %c", &guess);

        // Check the guess and update the game state
        int correct = check_guess(guess, word, guessed, &mistakes);
        if (correct) {
            printf("Correct!\n");
        } else {
            printf("Incorrect!\n");
        }

        // Check if the player has won
        if (check_win(word, guessed)) {
            printf("The word was: %s\n", word);
            printf("YOU WIN!\n");
            return 0;
        }
    }

    // The player has lost
    draw_hangman(mistakes);
    printf("The word was: %s\n", word);
    printf("YOU LOSE!\n");
    return 0;
}

