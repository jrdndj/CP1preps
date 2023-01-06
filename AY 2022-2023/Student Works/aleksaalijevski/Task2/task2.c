#include <stdio.h>

#define MAX_MISSES 6
#define MAX_WORD_LENGTH 10

// possible words for the hangman game
const char words[][MAX_WORD_LENGTH + 1] = {
    "chair", "ocean", "whale", "ball", "television", "popcorn","keyboard"
};
#define NUM_WORDS (sizeof words / sizeof words[0])

int main() {
    // select a random word from the array above
    int word_index = 0;
    const char *word = words[word_index];

    int word_length = 0;
    while (word[word_length] != '\0') {
        word_length++;
    }

    char word_display[word_length + 1]; // display the word to the user
    for (int i = 0; i < word_length; i++) {
        word_display[i] = '_';
    }
    word_display[word_length] = '\0';

    int misses = 0; // number of incorrect guesses
    char misses_display[MAX_MISSES + 1] = ""; // for displaying the missed letters to the user

    while (misses < MAX_MISSES) {
        printf("Word: %s\n", word_display);
        printf("Misses: %s\n", misses_display);
        printf("Enter a letter: ");

        char c = getchar();

        // to check if the letter is in the selected word
        int found = 0;
        for (int i = 0; i < word_length; i++) {
            if (word[i] == c) {
                word_display[i] = c;
                found = 1;
            }
        }

        // if the letter is excluded from the word, add it to the misses_display and increment misses
        if (!found) {
            misses_display[misses] = c;
            misses++;
        }

        // check if player holds W
        int won = 1;
        for (int i = 0; i < word_length; i++) {
            if (word_display[i] != word[i]) {
                won = 0;
                break;
            }
        }

        if (won) {
            printf("Take this like a champ, woohoo!\n");
            return 0;
        }
    }

    printf("So sorry buddy, better luck next time, the word was %s.\n", word);
    return 0;
}
