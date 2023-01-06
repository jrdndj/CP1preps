/* Including libraries/headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

/* Start of main code */
int main() {

	/* Creation of a integer that's always random using srand & rand */
	time_t TIME;
    srand ( (unsigned) time (&TIME));
    int dRandom=rand()%5; //hard-coded because of length of array
    
    /* Taking the word from the array of words using the random number */
	const char *WORDS[]={"break","counter","league","drink","jazz"}; //hard coded as stated in the description
	char sWord[strlen(WORDS[dRandom])];
	sWord[0]='\0'; //to be null/empty
	strcpy(sWord,WORDS[dRandom]);
	const int WORD_LENGTH=strlen(sWord); //length of the word

	/* Creation of an equivalent string of word but instead of letter '_' */
	char sEmptyWord[WORD_LENGTH];
	for (int i = 0; i < WORD_LENGTH; ++i) sEmptyWord[i]='_';

	/* Creating an empty string to store the guesses */
	char sGuesses[WORD_LENGTH+6];
	sGuesses[0]='\0'; //to be null/empty

	/* Necessary variables */
	int dCounterGuess = 0; //multi purpose counter
	int dMistake=0; //mistakes
	char cGuess; //guess character temporary storage

	/* Clearing screen */
	system("clear");
		
	/* Starter loop */
	while (1){

		/* Safety Check*/
		dCounterGuess=0;
		for (int i = 0; i < strlen(sEmptyWord); ++i) if(sEmptyWord[i]=='_') dCounterGuess++;

		/* Break conditions */
		if(dMistake==6 || strcmp(sEmptyWord,sWord)==0 || dCounterGuess==0) break;


		/* Interface prints */
		printf("\n-----------------------------------------\n");
		switch (dMistake) { //switch cases for every mistake
			case 1:
			printf("______\n"
					"|/   |\n"
					"|   (_)\n"
					"|    \n"
					"|    \n"
					"|    \n"
					"|\n"
					"|_____");
			break;
			case 2:
			printf("______\n"
					"|/   |\n"
					"|   (_)\n"
					"|    |\n"
					"|    |  \n"  
					"|    \n"
					"|\n"
					"|_____");
			break;
			case 3:
			printf("______\n"
					"|/   |\n"
					"|   (_)\n"
					"|   \\|\n"
					"|    |\n"
					"|    \n"
					"|\n"
					"|_____");
			break;
			case 4:
			printf("______\n"
					"|/   |\n"
					"|   (_)\n"
					"|   \\|/\n"
					"|    |\n"
					"|    \n"
					"|\n"
					"|_____");
			break;
			case 5:
			printf("______\n"
					"|/   |\n"
					"|   (_)\n"
					"|   \\|/\n"
					"|    |\n"
					"|   / \n"
					"|\n"
					"|_____");
			break;
			case 6:
			printf("______\n"
					"|/   |\n"
					"|   (_)\n"
					"|   \\|/\n"
					"|    |\n"
					"|   / \\\n"
					"|\n"
					"|_____");
			break;
			case 0:
			printf("______\n"
					"|/   |\n"
					"|   \n"
					"|    \n"
					"|    \n"
					"|    \n"
					"|\n"
					"|_____");
			break;
		} //end switch
		printf("\n\n-----------------------------------------\n");
		printf("\nThe word is: %s\n",sEmptyWord);
		printf("You are allowed to make only 5 mistakes\n");

		/* Asking for input */
		printf("Input a character guess: ");
		scanf(" %c",&cGuess);
		cGuess=tolower(cGuess); //lowering if needed

		/* Clearing screen */
		system("clear");

		/* Valid input check */
		if (isalpha(cGuess)==0){
			printf("\n\nYou need to input a alphabetical character\nTry again\n");
			continue;
		} //end if

		/* If it's been guessed already check */
		dCounterGuess=0;
		for (int i = 0; i < strlen(sGuesses); ++i){
			if(sGuesses[i]==cGuess){
				printf("\nCharacter has already been guessed");
				/* Printing the number of mistakes */
				printf("\n\nNumber of mistakes %d\nAll inputted guesses: %s\n",dMistake,sGuesses);
				dCounterGuess++;
			} //end inner if
		} //end for

		/* Storing the guesses depending if it's the first guess */
		if (dCounterGuess>0) continue;
		else if(strlen(sGuesses)!=0) strcat(sGuesses,"-");
		strncat(sGuesses,&cGuess,1);

		/* If it's the correct guess check */
		dCounterGuess=0;
		for (int i = 0; i < WORD_LENGTH; ++i){
			if (sWord[i]==cGuess){
				sEmptyWord[i]=cGuess;
				dCounterGuess++;
			} //end inner if
		} //end for
		
		/* Printing if it's not found */
		if(dCounterGuess==0){
			printf("\nThe guess is not found in the sWord");
			dMistake++;
		} //end if

		/* Printing how many times it's found */
		else if (dCounterGuess==1) printf("\nThe guess is found once in the sWord");
		else printf("\nThe guess is found %d times in the sWord",dCounterGuess);

		/* Printing the number of mistakes */
		printf("\n\nNumber of mistakes %d\nAll inputted guesses: %s\n",dMistake,sGuesses);
	} //end while
	/* Clearing screen */
	system("clear");
	/* Interface prints */
	printf("\n-----------------------------------------\n");

	/* Prints if the user lost or won */
	if(dMistake==6) {
		printf("\t\t______\n"
				"\t\t|/   |\n"
				"\t\t|   (_)\n"
				"\t\t|   \\|/\n"
				"\t\t|    |\n"
				"\t\t|   / \\\n"
				"\t\t|\n"
				"\t\t|_____\n");
		printf("\n-----------------------------------------\n");
		printf("\n\t\t You lost\n");
	} //end if
	else printf("\n\t\t You won\n");

	/* Interface prints */
	printf("\n\t  The game is finished\n");
	printf("\t  The word was: %s\n",sWord);
	printf("\t  You made %d mistake\\s\n",dMistake);
	printf("\n-----------------------------------------\n\n");

	/* End of code */
	return 0;
}