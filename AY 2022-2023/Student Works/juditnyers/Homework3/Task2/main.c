#include<stdio.h>
#include<stdlib.h>//for the random function
#include<time.h> //for srand
#include<string.h> //for strings 

//HANGMAN GAME

//Refernce link: https://youtu.be/sitn00wQMrg

int main() { 
	
srand(time(NULL)); //helps the random func always a different random no.

char words[][9] = { //9 is the largest size we need 
	//to store birthday (longest word)
	"night",
	"animals",
	"party",
	"birthday",
	"summer",
	"holiday"
};

//SETUP
int random;
random= rand() % 6; //modulo 6, so all remainders will be 0-5

int lives = 8; //lives of the player
int correct = 0; //correct guesses
int oldcorrect = 0;

int length = strlen(words[random]); //length of chosen word
int guessedletter[9] = {0,0,0,0,0,0,0,0,0}; //placement of letters

int quit;

char guess[9]; //array of the word with 9 spaces
char gletter;

//printf("words: %s random: %d length: %d\n",  //Shows the chosen word
//	words[random], random, length);			   //with length and placement
											   //helped keep me on track

printf("\nWELCOME TO THE HANGMAN GAME.");
printf("\nTHE GAME STARTS NOW.");
printf("\nYou have 8 lives. Each time you guess wrongly, one life will be taken.");
printf("\nIf you wish to end the game, type 'quit'.\n");

//GAME LOOP

while (correct < length) { //the guesses available are less than the length of the word

 printf("\nNew turn... \nHangman word: \n");

 for (int i=0; i<length; i++) { //for loop for placing the chosen word in an array

		if (guessedletter[i] == 1) { //
			printf("%c",words[random][i]);
		}
		else {
			printf(" _ ");
		}
	}

	printf("\n");

	printf("Number of correct guesses: %d\n", correct);
	printf("Enter a letter: \n");
	scanf("%s", guess);

	if (strncmp(guess, "quit",4) == 0) {
		quit = 1;
		break;
	}
	gletter = guess[0]; 

	printf("Letter guessed: %c \n",gletter);

	//looping through the word comparing if the user
	//guessed it right 

	oldcorrect = correct; 

	for (int i=0; i<length; i++) {

		if (guessedletter[i] == 1) { //loop continues if the word was already guessed
			continue;
		}

		if (gletter == words[random][i]) { //comparing the guess with the letter of the word
			guessedletter[i] = 1;
			correct++;
		}
	}
	printf("\n");

	if (oldcorrect == correct) { //a life is lost when the user reenters an already guessed letter
		lives--;
		printf("Sorry, wrong guess \n");
		printf("You have %d lives left.\n",lives);
		if (lives == 0) {
			break; 
		}
	}
	else {
		printf("Correct!!\n");
	}

}

if ( quit == 1 ) { //giving the option of quitting early
	printf("\nThe user quit early.\n");
}
else if (lives == 0) {
	printf("\nGAME OVER. Word was: %s",
		words[random]);
}
else {
	printf("\nCONGRATS YOU WIN\n");
}

return 0;

}
