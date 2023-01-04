#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
//assign global variable
int maxGuess=6;
//function to draw the hangman hanging based on wrong guesses
void hangman(int wrongGuess){
	if (wrongGuess>0){
		printf("  +---+\n");
	}
		if (wrongGuess>1){
		printf("  |\n");
		printf("  |\n");
		printf("  |\n");
	}
	if(wrongGuess>2){
		printf("  O  ");
	}
		if(wrongGuess>3){
		printf("\n /|\\ ");
	}
		if(wrongGuess>4){
		printf("\n  |  ");
	}
		if(wrongGuess>5){
		printf("\n /\\");
		printf("\n ");
		printf("\n======|");
	}


}
int main(){
	//define words into array and pick randomly using srand
	char words[][15]={"famnit", "science", "computer", "teddybear",
	"wolf", "diogenes"};
	// i need to use this time function because its not random for some reason without it
	srand(time(0));
	//asigning variables
	char wordGuess[10];
	int random=rand() % 6;
	//copying strings
	strcpy(wordGuess, words[random]);
	int wordLength= strlen(wordGuess);

	//string manipulation (underscores for each letter)
	char currentGuess[wordLength+1];
	for(int i=0;i<wordLength;i++){
		currentGuess[i]='_';
	}
	//\0 denotes the end of the string
	currentGuess[wordLength]='\0';
	//assigning variables
	int wrongGuess=0;
	char guess;
	int correctCounter=0;
	char previousGuess=5;
	//asks user for input && checks if the guess is correct (in the for loop((if statement)))
	while(wrongGuess<maxGuess){
		previousGuess=guess;
		printf("Current word: %s\n",currentGuess );
		printf("Enter a letter to guess: ");
		scanf(" %c",&guess);
		//previous letter check
		//it only checks for previous but I am too lazy to store all previous guesses
		//stil somewhat stops cheating
		while(guess==previousGuess){
		printf("Try another letter, you have already guessed it: ");
		scanf(" %c",&guess);
		}
		int correctGuess=0;
		for(int i=0; i<wordLength;i++){
			if(guess==wordGuess[i]){
				currentGuess[i]=guess;
				correctGuess=1;
				correctCounter++;
			}
		}
		//mistake check
		if(!correctGuess){
			wrongGuess++;
		}
		//win check
		if (correctCounter==wordLength){
			printf("woohoo! you won!\n");
			break;//exits loop
		}
		//goes to draw function
		hangman(wrongGuess);
	}//lose check
	if(wrongGuess==maxGuess){
		printf("\nyou lost, you disguist me :(");
		printf("\n The word was : %s",wordGuess);
		exit(0);
	}
	return 0;
}