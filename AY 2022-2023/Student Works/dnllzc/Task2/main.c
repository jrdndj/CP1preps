#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_WRONG_GUESSES 6 // maximum number of wrong guesses allowed
#define NUM_WORDS 12 // number of words in the list

// list of words to choose from
const char *words[] = {
    "computer",
    "tablet",
    "mobile",
    "laptop",
    "monitor",
    "keyboard",
    "mousepad",
    "ventilator",
    "processor",
    "speaker",
    "headphones",
    "phone"
};

// function to draw the hangman
void drawHangman(int numIncorrect) {
    printf(" _______\n");
    printf(" |     |\n");
    if (numIncorrect > 0) {
        printf(" O     |\n");
    } else {
        printf("       |\n");
    }
    if (numIncorrect > 1) {
        printf(" |     |\n");
    } else {
        printf("       |\n");
    }
    if (numIncorrect > 2) {
        printf(" |     |\n");
    } else {
        printf("       |\n");
    }
    if (numIncorrect > 3) {
        printf("/|\\    |\n");
    } else {
        printf("       |\n");
    }
    if (numIncorrect > 4) {
        printf("/ \\    |\n");
    } else {
        printf("       |\n");
    }
    printf("_______|\n");
}

// function to check if the given letter is in the word
int checkLetter(const char *word, char letter) {
    int wordLength = strlen(word); // length of the word
    for (int i = 0; i < wordLength; i++) {
        if (word[i] == letter) { // if the letter is found in the word
            return 1; // return 1
        }
    }
    return 0; // return 0 if the letter was not found
}

int main() {
    srand(time(NULL)); // seed the random number generator
    int wordIndex = rand() % NUM_WORDS; // choose a random word from the list
    const char *word = words[wordIndex]; // the word to guess
    int wordLength = strlen(word); // length of the word
    char wordGuess[wordLength + 1]; // store the current guess of the word
    for (int i = 0; i < wordLength; i++) {
        wordGuess[i] = '_'; // initialize the guess with underscores
    }
    wordGuess[wordLength] = '\0'; // null-terminate the string
    int wrongGuesses = 0; // number of wrong guesses made so far
    int lettersGuessed[26] = {0}; // store the letters that have been guessed so far (0

    while (1) {
        printf("Word: %s\n", wordGuess); // print the current guess of the word
        drawHangman(wrongGuesses); // draw the hangman
        printf("Wrong guesses: %d/%d\n", wrongGuesses, MAX_WRONG_GUESSES); // print the number of wrong guesses made so far
        printf("Enter a letter: \n"); // prompt the user for a letter
        char letter[2]; // store the input letter
        scanf("%1s", letter); // read a single character from the input
        if (strlen(letter) != 1) { // check if the input is a single character
            printf("Invalid input! Please enter a single letter.\n");
            continue; // go back to the beginning of the loop
        }
        if (letter[0] < 'a' || letter[0] > 'z') { // check if the input is a lowercase letter
            printf("Invalid input! Please enter a lowercase letter.\n");
            continue; // go back to the beginning of the loop
        }
        int letterIndex = letter[0] - 'a'; // index of the letter in the lettersGuessed array
        if (lettersGuessed[letterIndex]) { // if the letter has been guessed before
            printf("You have already guessed this letter! Please try a different one.\n");
            continue; // go back to the beginning of the loop
        }
        lettersGuessed[letterIndex] = 1; // mark the letter as guessed
        if (checkLetter(word, letter[0])) { // if the letter is found in the word
                        // update the guess with the correct letter
            for (int i = 0; i < wordLength; i++) {
                if (word[i] == letter[0]) {
                    wordGuess[i] = letter[0];
                }
            }
        } else { // if the letter is not found in the word
            wrongGuesses++; // increase the number of wrong guesses
        }
        if (strcmp(word, wordGuess) == 0) { // if the guess is correct
            printf("Congratulations! You won! The word was %s.\n", word);
            break; // exit the loop
        }
        if (wrongGuesses == MAX_WRONG_GUESSES) { // if the maximum number of wrong guesses is reached
            printf("Sorry, you lost! The word was %s.\n", word);
            break; // exit the loop
        }
    }

    return 0;
}
