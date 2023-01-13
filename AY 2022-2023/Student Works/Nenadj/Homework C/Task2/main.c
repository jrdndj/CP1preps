// Task 2 ~ Hangman Game	Student: Nenad Jakovchevski		Student_ID: 89221061
/* Adding Libraries Set Here: */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* Global variable declarations Set Here */
#define KRED  "\x1B[31m" // defining local variable for COLOR ~ Red
#define KGRN  "\x1B[32m" // defining local variable for COLOR ~ Green
#define KNRM  "\x1B[0m" // defining local varialbe for NORMAL Terminal Dislpay COLOR

/* Function declarations Set Here */
void Hangman(int IncorrectGuess); // prototype set here, non empty parametar & doesn't need to return anything

// Start of the Program
int main() {
	// Display of Game INFOMATION/RULES.
	printf("Welcome to Hangman.\nThe Following Rules Apply: ");
	printf("\n\t - Maximum number of mistakes: 6");
	printf("\n\t - Input should be in lower case to be detected!");
	printf("\n-----------------------------------------------------------\nLet's Begin:\n");
	
	// declare LOCAL variables
	char *FixedWords[] = {
		"dog",
		"kitten",
		"cities",
		"random",
		"aphrodisiac", //Fixed Words Array for the Game
		"winner",
		"uwu",
		"clone",
		"swamp",
		"whiskey"
	};
	int WordCount = sizeof(FixedWords) / sizeof(FixedWords[0]); // function to get the ammount of letters

	srand(time(NULL)); // to set a different seed after each run of the program (for random value)
    int WordIndex = rand() % WordCount; // will give a random integer from the array from 0 to the last word

    const char *Word = FixedWords[WordIndex]; // variable to put the word into
    int WordLength = strlen(Word); // to get the length of the word
    char WordGuess[20]; // variable that displays the hidden letters

    for (int index = 0; index < WordLength; index++) 
    {
        WordGuess[index] = '_'; // to display the ammount of letters in hidden form
    }//endforloop
    WordGuess[WordLength] = '\0';

    int IncorrectGuess = 0;
    // start of main while loop
    while (IncorrectGuess < 	6) {
        printf("Word to Guess: %s\n", WordGuess);
        Hangman(IncorrectGuess); // calling function Hangman
        printf("Guesses remaining: %d\n", 6 - IncorrectGuess);
        
		// declaring Variable for Letters
        char LetterInput;
        printf("Enter guess --> ");
        scanf(" %c", &LetterInput);
        int LetterCounter = 0; // declaring letter counter to check if a letter is in the word
        printf("-----------------------------\n");

        for (int index = 0; index < WordLength; index++) 
        {
            if (Word[index] == LetterInput) { // condition if the letter exist in the word
                WordGuess[index] = LetterInput;
                LetterCounter = 1;
            }//endif
        }//endforloop

        if (!LetterCounter) { // condition if the letter is different then original value 0
            IncorrectGuess++;
        }//endif

        if (strcmp(Word, WordGuess) == 0) {
        	 printf(" ______\n|    \n|   %s\\O/%s\n|    %s|%s\n|   %s/ \\%s\n|_____\n", KGRN, KNRM, KGRN, KNRM, KGRN, KNRM);
            printf("%sCONGRATULATIONS! YOU SURVIVED HANGMAN.\n", KGRN);
			printf("%sThank you for playing.\nGoodbye...\n", KNRM);
            break;
        }//endif
    }//endwhileloop

    if (IncorrectGuess == 6) { // condition if the player loses
    	printf(" ______\n|    |\n|    %sO%s\n|   %s/|\\%s\n|   %s/ \\%s\n|_____\n", KRED, KNRM, KRED, KNRM, KRED, KNRM);
        printf("%sGAME OVER! No more guesses Remaining.\nYOU DIED!\n", KRED);
		printf("%sThank you for playing. Try your luck next time.\nThe word was: %s\nGoodbye...\n", KNRM, Word);
    }//endif

    while(1)// loop if user wants to continue the game
    {
    	 char VarRepeater = '\0';
    	 printf("Would you like to play again? (Y/N) -->");
    	 scanf(" %c", &VarRepeater);
    	 printf("\n");

    	 if(VarRepeater=='Y' || VarRepeater=='y')
    	 	return main(); // call the main function
    	 else if(VarRepeater=='N' || VarRepeater=='n'){
    	 	printf("Shutting down ...\n");
    	 	break;
    	 }
    	 else
    	 	printf("%sERROR%s: Wrong Input.\n", KRED, KNRM);
    }//endwhileloop
	return 0;
}

void Hangman(int IncorrectGuess){
	switch (IncorrectGuess) // switch case statement for every hangman scenario
	{
	case 1:
		printf(" ______\n|    |\n|    O\n|   \n|   \n|_____\n");
		break;
	case 2:
		printf(" ______\n|    |\n|    O\n|    |\n|   \n|_____\n");
		break;
	case 3:
		printf(" ______\n|    |\n|    O\n|   /|\n|   \n|_____\n");
		break;
	case 4:
		printf(" ______\n|    |\n|    O\n|   /|\\\n|   \n|_____\n");
		break;
	case 5:
		printf(" ______\n|    |\n|    O\n|   /|\\\n|   /\n|_____\n");
		break;
	default:
		printf(" ______\n|    |\n|    \n|   \n|   \n|_____\n");
	}
}