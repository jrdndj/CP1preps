/* 
	File: Task2_part1.c (implemented the playHangman and chooseWord functions, drawHangman is yet to be finished)
						           (also it is missing how to determine valid input from user - TO BE FINISHED)
	Author: SOFIJA KOCHOVSKA
	Student ID: 89221062
	Description: Terminal - based hangman game written in C programming language
*/

#include<stdio.h>	 // FOR INPUT/OUTPUT RELATED FUNCTIONS
#include<stdlib.h> // FOR RANDOM NUMBER GENERATIONS
#include<string.h> // FOR STRING RELATED FUNCTIONS
#include<time.h>	 // FOR TIME MANIPULATION

// GLOBAL VARIABLES
  	const int dMaxWrongGuesses = 7;

//FUNCTIONS

// Function to select a random word from the word list
char* chooseWord() {
	// DECLARE VARIABLES
	// Declared array of possible word choices
		char* dWordChoices[10] = {
			"analysis",		"clutch",
			"folder",		  "keyboard",
			"peanuts",		"allergy",
			"windmill",		"noise",
			"celery",		  "seabass"
		};
	/* 
		 Declared integer for an index of a random word
	   (%10 due to the size of the array of words) 
	*/
		int dRandomIndex = rand() % 10;

	// Returning the randomly chosen word
	return dWordChoices[dRandomIndex];

}// end of function chooseWord

// Function to draw the hangman based on the number of wrong guesses
void drawHangman(int dWrongGuesses) {
  // NEEDS TO BE FINISHED
}// end of function drawHangman

// Function to play a game of Hangman
void playHangman() {
	// DECLARE VARIABLES
	char  	*dRandomWord 		= chooseWord();
  	int  	dWordLength 		= strlen(dRandomWord);
  	int  	dWrongGuesses 		= 0;

  	int  	dLoopCounter;
  	char 	dLetterInput;
  // char array the size of the word length of the random word the user has to guess
	char dGuess[dWordLength];

	// For loop to store '-' in the dGuess char array, which is later filled with user's guesses
		for(dLoopCounter = 0; dLoopCounter < dWordLength; dLoopCounter++){
			dGuess[dLoopCounter] = '-';
		}//end for

	dGuess[dWordLength] = '\0';

	// Play the game
	while( dWrongGuesses < dMaxWrongGuesses ){
		printf("Current state: %s\n", dGuess);

		// Prompt the user for input
		printf("Enter a letter: ");
		scanf("%c", &dLetterInput);
		getchar();

		/* 
			 Check for valid input, 
			 whether it IS a LOWERCASE LETTER (to be finished)
		*/

			// Declared integer as a flag to track if the entered letter was found in the word
			int dCorrectGuesses = 0; 

			// For loop to iterate through the letters of the random word
			for( dLoopCounter = 0; dLoopCounter < dWordLength; dLoopCounter++ ){

					/* 
							Check if the entered letter is contained in the random word, 
							if it is, store it in the dGuess array
					*/
					if( dRandomWord[dLoopCounter] == dLetterInput ){
						dGuess[dLoopCounter] = dLetterInput;
						dCorrectGuesses 	 = 1;
					}//endif
			}//endfor

		/* 
			 If an incorrect letter has been entered, draw the stick figure and 
			 increase the number of wrong guesses
		*/
		if( dCorrectGuesses==0 ){
			dWrongGuesses++;
			//drawHangman(dWrongGuesses); //has not been developed yet
			printf("Wrong guess! You have %d attempt(s) left.\n", dMaxWrongGuesses - dWrongGuesses);
		}//endif
		//else print error message due to invalid input (to be finished)
		
		/* 
			 Check if the player has won, by using string comparison, 
			 which is 0 if there is no difference, so the player has won
	 	*/
		if(strcmp(dRandomWord, dGuess) == 0){
			printf("\nCongrats! You won! The correct word was: %s.\n\n", dRandomWord);
			return;
		}//endif
	}//endwhile

	/* 
		 When out of the while loop, the number of wrong guesses is 
		 larger than the maximum allowed wrong guesses, so the player has lost
	*/
		printf("\nDrat! You lost! The word was: %s.\n\n", dRandomWord );

}//end of function playHangman

int main(){
	srand(time(NULL));
	playHangman();

	return 0;
}// end main
