#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

const int maxGuess = 6;

int main() {
    char* words[] = {"hangman"};
    char input;

    int wordLength = strlen(words[0]);
    int wrong = 0;
    int count;
    char guess[wordLength];  // gets the size of the random word

    // fills the whole word with "_"
    for (count = 0; count < wordLength; count++) {
        guess[count] = '_';
    }

    // main while loop that will search the word for your inputs
    while (wrong < maxGuess) {
        printf("Current guess: %s\n", guess);
        printf("Enter a letter: ");
        scanf(" %c", &input);

        int correctGuess = 0;

        // for will iterate through letters of the word
        for (int i = 0; i < wordLength; i++) {
            // this will check if the letter is contained in the word and store it
            if (words[0][i] == input) {
                printf("Correct guess!\n");
                guess[i] = input;
                correctGuess = 1;
            }
        }
        // you guessed the wrong letter if for finished, since it passes the whole word
        // In that case while will loop again
        if (correctGuess == 0) {
            wrong++;
            printf("Incorrect guess! %d/%d remaining\n", maxGuess - wrong, maxGuess);
        }

        // check if all letters have been guessed correctly
        int finished = 1;
        for (int i = 0; i < wordLength; i++) {
            if (guess[i] == '_') {
                finished = 0;
                break;
            }
        }
        if (finished) {
            printf("Congratulations! You guessed the word: %s\n", guess);
            break;
        }
    }

    if (wrong == maxGuess) {
        printf("You lost! The word was: %s\n", words[0]);
    }

    return 0;
}
