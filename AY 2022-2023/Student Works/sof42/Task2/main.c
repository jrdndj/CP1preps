/* 
	File: main.c
	Author: SOFIJA KOCHOVSKA
	Student ID: 89221062
	Description: Terminal - based hangman game written in C programming language
*/

#include<stdio.h>	// FOR INPUT/OUTPUT RELATED FUNCTIONS
#include<stdlib.h> 	// FOR RANDOM NUMBER GENERATIONS
#include<string.h> 	// FOR STRING RELATED FUNCTIONS
#include<time.h>	// FOR TIME MANIPULATION

//GLOBAL VARIABLES	
  const	int dMaxWrongGuesses = 7;

// FUNCTIONS

// Function to select a random word from the word list
char* chooseWord() {
	// DECLARE VARIABLES
	// Declared array of possible word choices
		char* dWordChoices[10] = {
			"analysis",		"clutch",
			"folder",		"keyboard",
			"peanuts",		"allergy",
			"windmill",		"noise",
			"celery",		"seabass"
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
  switch (dWrongGuesses) {
  	// Maximum allowed mistakes are 7, hence the number of cases
    case 0:
      printf("\n");
      break;
    case 1:
      printf("\n\n\n\n  |\n  |\n  |\n  |\n\n");
      break;
    case 2:
      printf(" _______\n  |\n  |\n  |\n  |\n\n");
      break;
    case 3:
      printf(" _______\n  |/   |\n  |\n  |\n  |\n\n");
      break;
    case 4:
      printf(" _______\n  |/   |\n  |    O\n  |\n  |\n\n");
      break;
    case 5:
      printf(" _______\n  |/   |\n  |    O\n  |    |\n  |\n\n");
      break;
    case 6:
     	printf(" _______\n  |/   |\n  |    O\n  |   /|\\\n  |\n\n");
     	break;
    case 7:
      printf(" _______\n  |/   |\n  |    O\n  |   /|\\\n  |   / \\ \n\n");
      break;
      }// end switch
}// end of function drawHangman

// Function to play a game of Hangman
void playHangman() {
	// DECLARE VARIABLES
	char  *dRandomWord = chooseWord();
  	int  	dWordLength = strlen(dRandomWord);
  	int  	dWrongGuesses = 0;
  	int  	dLoopCounter;
  	char 	dLetterInput;
  // char array the size of the word length of the random word the user has to guess
	char dGuess[dWordLength];

	// For loop to store '-' in the dGuess char array, which is later filled with user's guesses
		for(dLoopCounter = 0; dLoopCounter < dWordLength; dLoopCounter++){
			dGuess[dLoopCounter] = '-';
		}//end for

	// Represent the end of the string (EOS)
	dGuess[dWordLength] = '\0';

	// Play the game until the user has run out of guesses
	while( dWrongGuesses < dMaxWrongGuesses ){
		printf("Current state: %s\n", dGuess);

		// Prompt the user for input
		printf("Enter a letter: ");
		scanf("%c", &dLetterInput);
		getchar();

		/* 
			 Check for valid input, 
			 whether it IS a LOWERCASE LETTER
		*/
		if( dLetterInput >= 'a' && dLetterInput <= 'z' ){//if1

			// Declared integer as a flag to track if the entered letter was found in the word
			int dCorrectGuesses = 0; 

			// For loop to iterate through the letters of the random word
			for( dLoopCounter = 0; dLoopCounter < dWordLength; dLoopCounter++ ){

					/* 
							Check if the entered letter is contained in the random word, 
							if it is, store it in the dGuess array
					*/
					if( dRandomWord[dLoopCounter] == dLetterInput ){//if2
						dGuess[dLoopCounter] = dLetterInput;
						dCorrectGuesses = 1;
					}//end if2
			}//end for

		/* 
			 If an incorrect letter has been entered, draw the stick figure and 
			 increase the number of wrong guesses
		*/
			if( dCorrectGuesses==0 ){//if3
				dWrongGuesses++;
				drawHangman(dWrongGuesses);
				printf("Wrong guess! You have %d attempt(s) left.\n", dMaxWrongGuesses - dWrongGuesses);
			}//end if3
		}//end if1

		// If the input is NOT a LOWERCASE LETTER, output an error message
		else{
			printf("Invalid Input! Enter a LOWERCASE LETTER.\n");
			continue;
		}//end else
		
		/* 
			 Check if the player has won, by using string comparison, 
			 which is 0 if there is no difference, so the player has won
	 */
		if(strcmp(dRandomWord, dGuess) == 0){
			printf("\nCongrats! You won! The correct word was: %s.\n\n", dRandomWord);
			return;
		}//end if
	}//end while

	/* 
		 When out of the while loop, the number of wrong guesses is 
		 larger than the maximum allowed wrong guesses, so the player has lost
	*/
		printf("\nDrat! You lost! The word was: %s.\n\n", dRandomWord );

}//end of function playHangman

// MAIN
int main(){
// Changing seed for generating random words according to the time the program is run
	srand(time(NULL)); 

	printf("\nWelcome to Hangman!\n");
	printf("Lowercase alphabet used.\n");
	printf("Maximum allowed errors are 7.\nHave fun!\n");
	playHangman();

return 0;
}// END MAIN
