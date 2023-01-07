#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_GUESSES 6 // Maximum number of incorrect guesses allowed

// Function prototypes
void draw_hangman(int num_incorrect_guesses);
void play_game(char* word);

int main(void) {
    srand(time(0)); // Seed the random number generator

    // Array of possible words to choose from
    char* words[] = { "hangman", "terminal", "guess", "word", "array" };
    int num_words = sizeof(words) / sizeof(words[0]); // Number of words in the array

    // Choose a random word from the array
    int index = rand() % num_words;
    char* word = words[index];

    play_game(word);

    return 0;
}//endmain

// Function to play the hangman game
void play_game(char* word) {
    int word_length = strlen(word); // Length of the word
    char word_copy[word_length + 1]; // Copy of the word, with blanks for unguessed letters
    for (int i = 0; i < word_length; i++) {
        word_copy[i] = '_';
    }//endforloop
    word_copy[word_length] = '\0'; // Null terminator

    int num_incorrect_guesses = 0; // Number of incorrect guesses so far
    while (num_incorrect_guesses < MAX_GUESSES) {
        printf("Word: %s\n", word_copy); // Print the current state of the word
        draw_hangman(num_incorrect_guesses); // Draw the hangman

        char guess;
        printf("Guess a letter: ");
        scanf(" %c", &guess); // Read the letter

        int correct = 0; // Flag to indicate if the guess was correct
        for (int i = 0; i < word_length; i++) {
            if (word[i] == guess) { // The letter was found in the word
                word_copy[i] = guess;
                correct = 1;
            }//endcheckifGuessedCorrectWord
        }//endforloop

        if (!correct) { // The letter was not found in the word
            num_incorrect_guesses++;
        }//endcheckifLetterExists

        if (strcmp(word, word_copy) == 0) { // The word has been fully guessed
            printf("Congratulations! You won!\n");
            return;
        }//endcheckifWordFullyGuessed
    }//endwhile

    // The player has used up all their guesses
      printf("  _______\n");
      printf("  |     |\n ");
      printf(" |     O\n ");
      printf(" |    /|\\\n ");
      printf(" |    / \\\n ");
      printf(" |\n ");
      printf("=========\n");
    printf("You lost :( The word was: %s\n", word);
}//endPlayGameFunction

// Function to draw the hangman
void draw_hangman(int num_incorrect_guesses) {
    printf("Incorrect guesses: %d/%d\n", num_incorrect_guesses, MAX_GUESSES);

    // Draw the hangman based on the number of incorrect guesses
    switch (num_incorrect_guesses) {
    case 0:
      printf("  _______\n");
      printf("  |     |\n ");
      printf(" |     \n ");
      printf(" |    \n ");
      printf(" |     \n ");
      printf(" |\n ");
      printf("=========\n");
      break;
    case 1:
      printf("  _______\n");
      printf("  |     |\n ");
      printf(" |     O\n ");
      printf(" |    \n ");
      printf(" |    \n ");
      printf(" |\n ");
      printf("=========\n");
      break;
      break;
    case 2:
      printf("  _______\n");
      printf("  |     |\n ");
      printf(" |     O\n ");
      printf(" |     |\n ");
      printf(" |     \n ");
      printf(" |\n ");
      printf("=========\n");
      break;
    case 3:
      printf("  _______\n");
      printf("  |     |\n ");
      printf(" |     O\n ");
      printf(" |    /|\n ");
      printf(" |    \n ");
      printf(" |\n ");
      printf("=========\n");    
      break;
    case 4:
      printf("  _______\n");
      printf("  |     |\n ");
      printf(" |     O\n ");
      printf(" |    /|\\\n ");
      printf(" |    \n ");
      printf(" |\n ");
      printf("=========\n");
      break;
    case 5:
      printf("  _______\n");
      printf("  |     |\n ");
      printf(" |     O\n ");
      printf(" |    /|\\\n ");
      printf(" |    / \n ");
      printf(" |\n ");
      printf("=========\n");
      break;
    case 6:
      printf("  _______\n");
      printf("  |     |\n ");
      printf(" |     O\n ");
      printf(" |    /|\\\n ");
      printf(" |    / \\\n ");
      printf(" |\n ");
      printf("=========\n");
      break;
  }//endswitch
}//endDrawHangmanFunction







