#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define WORD_COUNT 10
#define MAX_WORD_LENGTH 20
#define MAX_TRIES 6

char word_list[WORD_COUNT][MAX_WORD_LENGTH] = {
    "affix", "askew", "awkward", "funny", "luxury", "swivel", "vodka", "gin", "beer", "whiskey"
};

void draw_hangman(int tries_left) {
    printf(" ___\n");
    printf("|   |\n");
    
    if (tries_left < 6)
        printf("|   O\n");
    else
        printf("|\n");

    if (tries_left < 4)
        printf("|  /");
    else
        printf("|   ");

    if (tries_left < 5)
        printf("|");
    else
        printf(" ");

    if (tries_left < 3)
        printf("\\\n");
    else
        printf("\n");

    if (tries_left < 2)
        printf("|  /");
    else
        printf("|   ");

    if (tries_left < 1)
        printf("\\\n");
    else
        printf("\n");

    printf("|\n");
    printf("|___\n");
}

int generate_random_number(int n) {
    int random_number;
    random_number = rand() % n;
    return random_number;
}

int main() {
    int n = WORD_COUNT; // Maximum value (exclusive)
    int random_index;
    int word_length;
    char current_word[MAX_WORD_LENGTH];
    char guessed_word[MAX_WORD_LENGTH];
    int tries_left = MAX_TRIES;
    char used_letters[26] = {0};  // Array to track used letters
    int already_used = 0;  // Flag to check if the guessed letter is already used

    // Initialize random seed
    srand(time(NULL));

    // Generate random index
    random_index = generate_random_number(n);

    // Save randomly chosen word to variable
    strcpy(current_word, word_list[random_index]);

    // Determine the length of the current word
    word_length = strlen(current_word);

    // Initialize the guessed word with dashes
    memset(guessed_word, '-', word_length);
    guessed_word[word_length] = '\0';

    printf("Welcome to Hangman Game!\n");
    printf("Try to guess the secret word by entering one letter at a time.\n");
    printf("You have %d tries remaining.\n", tries_left);
    printf("Word: %s\n", guessed_word);

    // Game loop
    while (tries_left > 0) {
        draw_hangman(tries_left);
        char guess;
        int found = 0;
        already_used = 0;  // Reset the already used flag for each guess

        printf("\nEnter your guess: ");
        scanf(" %c", &guess);

        // Check if the guessed letter is already used
        if (used_letters[guess - 'a']) {
            printf("Oops! You already tried the letter '%c'. Please try a different letter.\n", guess);
            continue;  // Skip the remaining code for this iteration
        }

        // Mark the letter as used
        used_letters[guess - 'a'] = 1;

        // Check if the guessed letter is in the word
        for (int i = 0; i < word_length; i++) {
            if (current_word[i] == guess) {
                guessed_word[i] = guess;
                found = 1;
            }
        }

        if (found) {
            printf("Correct guess!\n");
        } else {
            tries_left--;
            printf("Wrong guess! You have %d tries left.\n", tries_left);
        }

        printf("Word: %s\n", guessed_word);

        // Check if the word has been fully guessed
        if (strcmp(current_word, guessed_word) == 0) {
            printf("\nCongratulations! You've successfully guessed the word: %s\n", current_word);
            break;
        }
    }

    if (tries_left == 0) {
        draw_hangman(tries_left);
        printf("\nGame over! You've used all your tries. The secret word was: %s\n", current_word);
    }

    return 0;
}
