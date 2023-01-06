#include<stdio.h>
#include<stdlib.h>//for the random function
#include<time.h> //for srand to work
#include<string.h> //for strings 

//HANGMAN GAME


int main() {
	
srand(time(NULL)); //helps the random func always diff

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

int lives = 5;
int correct = 0;
int oldcorrect = 0;

int length = strlen(words[random]); //length of chosen word

int guessedletter[9] = {0,0,0,0,0,0,0,0,0};

int quit;

char guess[9];

printf("words: %s random: %d length: %d\n", 
	words[random], random, length);

//GAME LOOP

while (correct < length) {
	printf("Enter a letter: \n");
	scanf("%s", guess);

	if (strncmp(guess, "quit",4) == 0) {
		quit = 1;
		break;
	}
}

if ( quit == 1 ) {
	printf("\nThe user quit early.\n");
}

return 0;

}
