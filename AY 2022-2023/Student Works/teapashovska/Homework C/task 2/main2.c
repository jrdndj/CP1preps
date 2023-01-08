#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_WRONG_GUESSES 10 // maximum number of wrong guesses before the player loses

const char *words[] = {"terrific", "program", "terminal", "instructions", "carnival", "submission", "christmas", "different"}; // array of possible words

// function 
void drawHangman(int wrongGuesses);

int main()
{
    srand(time(0)); // random number generator
    int numWords = sizeof(words) / sizeof(words[0]); // number of words in the array
    int index = rand() % numWords; // choose a random word from the array
    const char *word = words[index]; // the chosen word
    int wordLength = strlen(word); // length of the word
    char wordGuess[wordLength + 1]; // word guess array (one extra space for the null terminator)
    for (int i = 0; i < wordLength; i++)
    {
        wordGuess[i] = '_'; // initialize the word guess array with underscores
    }
    wordGuess[wordLength] = '\0'; // null-terminate the word guess array
    int wrongGuesses = 0; // number of wrong guesses
    char letter; // letter entered by the player
    int alreadyGuessed = 0; // flag to check if the letter has already been guessed
    printf("Welcome to Hangman!\n");
    while (wrongGuesses < MAX_WRONG_GUESSES)
    {
        alreadyGuessed = 0;

        drawHangman(wrongGuesses); // draw the hangman
        printf("Word: %s\n", wordGuess); // print the word guess array
        printf("Guesses left: %d\n", MAX_WRONG_GUESSES - wrongGuesses); // print the number of guesses left
        printf("Enter a letter: ");
        scanf(" %c", &letter); // read the letter from the player
        for (int i = 0; i < wordLength; i++)
        {
            if (word[i] == letter) // if the letter is in the word
            {
                wordGuess[i] = letter; // fill in the blank
                alreadyGuessed = 1; // set the flag to indicate that the letter has been guessed
            }
        }
        if (!alreadyGuessed) // if the letter has not been guessed
        {
            wrongGuesses++; // increment the number of wrong guesses
        }
        if (strcmp(word, wordGuess) == 0) // if the word has been fully guessed
        {

            drawHangman(wrongGuesses); // draw the hangman
            printf("Congratulations, you won! The word was %s.\n", word);
            return 0; // exit the program
        }
    }

    drawHangman(wrongGuesses); // draw the hangman
    printf("Sorry, you lost. The word was %s.\n", word);
    return 0;
}
//function for drawing the hangman
void drawHangman(int wrongGuesses){
    if (wrongGuesses >= 1)
        printf(" |\n");
    else
        printf("");

    if (wrongGuesses >= 2)
        printf(" |\n");
    else
        printf("");

    if (wrongGuesses >= 3)
        printf(" O\n");
    else
        printf("");

    if (wrongGuesses == 4)
        printf("/  \n");

    if (wrongGuesses == 5)
        printf("/| \n");

    if (wrongGuesses >= 6)
        printf("/|\\ \n");
    else
        printf("");

    if (wrongGuesses >= 7)
        printf(" | \n");
    else
        printf("");

    if (wrongGuesses == 8)
        printf("/ \n");

    if (wrongGuesses >= 9)
        printf("/ \\ \n");
    else
        printf("");
}
