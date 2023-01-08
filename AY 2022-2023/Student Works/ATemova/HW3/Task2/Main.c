//Student ID: 89221055
//Student: Anastasija Temova

#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//Maximum number of mistakes allowed
#define MAX_MISTAKES 6 

//Possible words to choose from
const char *words[] = {"programming", "analysis", "algebra", "cpracticum", "structures"};

//Main function
int main(){
//Choose a random word
  int wordIndex = rand() % (sizeof(words)/sizeof(words[0]));
  const char *word = words[wordIndex];
//Get the length of the word
  int wordLength = strlen(word);
//Create an array to store the blanks for the word
  char wordBlanks[wordLength + 1];
//Initialize the array with underscores
  for (int i = 0; i < wordLength; i++){
//Fill the array with underscores
    wordBlanks[i] = '_';
  }
//Add a null terminator to the array
  wordBlanks[wordLength] = '\0';
//Number of mistakes made
  int mistakes = 0;
  while(mistakes < MAX_MISTAKES){
//Print the current state of the word
    printf("Word: %s\n",wordBlanks);
//Print the number of gusses left
    printf("Guesses left: %d\n", MAX_MISTAKES - mistakes);
//Enter a letter
    printf("Enter a letter: ");
    char letter;
//Read the letter entered from the user
    scanf(" %c", &letter);
//Check if the letter is in the word
    int letterFound = 0;
    for (int i = 0; i < wordLength; i++){
      if (word[i] == letter){
        wordBlanks[i] = letter;
        letterFound = 1;
      }
    }
//Check if the letter was not found in the word
    if(!letterFound){
      mistakes++;
//Inform the user that they guessed incorrectly
      printf("Incorrect guess\n");
//Draw the Hangman
//Function to draw the Hangman
      switch(mistakes){
        case 1:
          printf("   |\n");
          break;
        case 2:
          printf("   |\n   O\n");
          break;
        case 3:
          printf("   |\n   O\n   |\n");
          break;
        case 4:
          printf("   |\n   O\n  /|\n");
          break;
        case 5:
          printf("   |\n   O\n  /|\\\n");
          break;
        case 6:
          printf("   |\n   O\n  /|\\\n  /\n");
          break;
      }
    }
//Check if the word has been guessed correctly
    if (strcmp(word, wordBlanks) == 0){
      //Inform the user that they have won the game
      printf("Congratulations! You won the game!\n");
//End of the game
      break; 
    	}
  	}	
//Return statement
	  return 0;
}
