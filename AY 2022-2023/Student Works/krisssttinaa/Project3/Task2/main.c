//library for printing strings, integers, characters on the output screen...(for basics)
#include <stdio.h>
//library for general purpose (functions involving memory allocation, process control, conversions...)
#include <stdlib.h>
//library for characters-string
#include <string.h>
//library for random number
#include <time.h>
//library for funtions "islower()" and "isalpha()" that are useful for testing and mapping characters
#include <ctype.h>

//Possible words to choose from
//Mutable pointer to an immutable string/character
//The const keyword makes a string/character immutable, meaning its content is read-only
const char* sRandom[] = {
  "americano",
  "espresso",
  "cortado",
  "affogato",
  "latte",
  "cappuccino",
  "macchiato",
  "mocha",
  "ristretto",
  "black"
};

int main() {
  //Add the random number generator
  srand(time(NULL));

  //Choose a random word from the array
  //Mutable pointer to an immutable string/character
  const char* sWord = sRandom[rand() % 10];
  int dWordLength = strlen(sWord);

  //Create an array to store the current state of the word
  char sCurWord[dWordLength + 1];
  for (int i = 0; i < dWordLength; i++) {
      sCurWord[i] = '_';
  }
  sCurWord[dWordLength] = '\0';

  //Initialize the number of incorrect guesses
  int dWrongGuess = 0;

  //Continue the game until the player has won or lost
  while (dWrongGuess < 8 || cAgain=='y') {
    //Print the current word
    printf("\nCurrent word: %s\n", sCurWord);

    //Print the hangman with respect to amount of wrong answers
    if (dWrongGuess > 0) {
      printf("\n  ________\n");
    }
    if (dWrongGuess > 1) {
      printf("  |      |\n");
    }
    if (dWrongGuess > 2) {
      printf("  |    ('_')\n");
    }
    if (dWrongGuess > 3) {
      printf("  |     /|\\ \n");
    }
    if (dWrongGuess > 4) {
      printf("  |     / \\ \n");
    }
    if (dWrongGuess > 5) {
      printf("  | \n");
    }
    if (dWrongGuess > 6) {
      printf("  |__________ \n");
    }

    //Check if the user is a winner
    int dVictory = 1;
    //For loop checks if there is any characters that are not filled 
    //(which means the word is not guessed/not completly guessed)
    for (int i = 0; i < dWordLength; i++) {
      if (sCurWord[i] == '_') {
        dVictory = 0;
        break;
      }
    }
    //Print a message if the user won
     if (dVictory) {
      printf("\nGAME IS OVER!\nCongratulations!\nYou won!\n \n");
      printf("  ('o')     thank you!\n");
      printf("   _|_ \n");
      printf("   / \\ \n \n");
      break;
    }
    //If the limit of wrong attempts is reached
    if (dWrongGuess == 7) {
        printf("\nGAME IS OVER!\nYou lost! The word: %s\n \n", sWord);
        break;
    }

    //Ask input from the user
    char cGuess;
    while (dWrongGuess < 7) {
    printf("\nEnter a letter: ");
    scanf(" %c", &cGuess);
    //checks the output
    //isalfa checks if the input is a character
    if (isalpha(cGuess)) {
        //islower checks if the character is in lower case
        if (islower(cGuess)) {
            break;
      } else {
      printf("Please, insert a lowercase character.\n");
    }
    } else {
        printf("The input is not a character.\n");
    }
    }

    //Check if the guess fits
    int dRight = 0;
    //For loop goes throught all the characters and checks if there are matches
    //and changes the proper "_" of word that the user sees with that character
    for (int i = 0; i < dWordLength; i++) {
      if (sWord[i] == cGuess) {
        sCurWord[i] = cGuess;
        dRight = 1;
      }
    }

    //Update the number of wrong guesses (if the guess was wrong)
    if (!dRight) {
      dWrongGuess++;
    }
  }//endOfWhile
  return 0;
}//endOfMain
