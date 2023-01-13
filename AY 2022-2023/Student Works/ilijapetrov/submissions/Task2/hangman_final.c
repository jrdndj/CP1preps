#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

//Function to draw the hangman
void draw_hangman(int lives) {
if (lives == 6) {
printf("\n\n\n\n\n\n");
} else if (lives == 5) {
printf("\n\n\n\n\n _________\n");
} else if (lives == 4) {
printf("   _____\n   |\n   |\n   |\n   |\n   |\n __|______\n");
} else if (lives == 3) {
printf("   _____\n   |   O\n   |\n   |\n   |\n   |\n __|______\n");
} else if (lives == 2) {
printf("   _____\n   |   O\n   |  /|\\ \n   |\n   |\n   |\n __|______\n");
} else if (lives == 1) {
printf("   _____\n   |   O\n   |  /|\\ \n   |   |\n   |\n   |\n __|______\n");
} else if (lives == 0) {
printf("   _____\n   |   O\n   |  /|\\ \n   |   |\n   |  /'\\ \n   |\n __|______\n");
}
}//end of draw_hangman

//main
int main(int argc, char const *argv[])
{

	// Array of words to be guessed
  char* words[] = {"cat", "dog", "bird", "turtle", "lizard", "rhino", "giraffe", "dinosaur", "jordan", "antonio", "joco", "rakija"};

  // Choose a random word from the array and provide a random variable to do so
  srand(time(NULL));
  int r = rand();
  char* word = words[r % 12];
  int word_length = strlen(word);

  //Create a string that we fill with dashes at the beginning and replace dashes with apropriate letters later
  char guessed[word_length + 1];
  for (int i = 0; i < word_length; i++) {
    guessed[i] = '_';
  }
  guessed[word_length] = '\0';

  //Declaring that we have 6 lives and the start of the game
  int lives = 6;
  char guess;

  while(lives >= 0){
  	draw_hangman(lives);
  	//printing the string with the dashes with spaces in between for looks (will be used multiple times)
  	printf("Word: ");
  	for (int i = 0; i < word_length; i++){
  		printf("%c ", guessed[i]);
  	}
  	printf("\n");

  	if (lives != 0){//If you have lives, you enter this if statement and are allowed to guess
  		printf("Lives: %d\n", lives);
    	printf("Enter a letter: ");
    	scanf(" %c", &guess);
    	guess = tolower(guess);//if user enters an uppercase letter, convert it to lowercase
    	printf("\n");

    	if(isalpha(guess)==0){//checks whether the guess is a letter
    		printf("\n\n\t\tPlease enter a letter!\n\n");
    		continue;
    	}
    	else{
    		// Check if the guess is correct
    		int correct = 0;
    		for (int i = 0; i < word_length; i++) {
      			if (word[i] == guess) {
        			guessed[i] = guess;
        			correct = 1;
      			}
    		}
    		if (!correct) {
      			lives--;
    		}
    	}
  	}//end of if(lives != 0)

  	// Check if the word has been fully guessed and if true, exits the while loop and the program
    if (strcmp(word, guessed) == 0) {
    	draw_hangman(lives);
    	printf("Word: ");
  		for (int i = 0; i < word_length; i++){
  			printf("%c ", guessed[i]);
  		}
  		printf("\nLives: %d", lives);
  		printf("\n");
      	printf("Congratulations! You guessed the word %s!\n", word);
      	break;
    }//end of if strcmp

	// Checks if you don't have any more lives and exits the program if true
  	if(lives==0){
  		draw_hangman(0);
  		printf("Word: ");
  		for (int i = 0; i < word_length; i++){
  			printf("%c ", guessed[i]);
  		}
  		printf("\n");
  		printf("Game over, you have no more lives left!\nThe word was %s!\n", word);
  		break;
  	}//end of if lives==0
    
  }//end of while
	return 0;
}//end of main
