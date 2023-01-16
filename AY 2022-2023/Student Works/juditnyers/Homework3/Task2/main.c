#include<stdio.h>
#include<stdlib.h>//for the random function
#include<time.h> //for srand
#include<string.h> //for strings 

//HANGMAN GAME

//Reference link: https://youtu.be/sitn00wQMrg

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
int oldcorrect = 0; //will be used to check if the no. of new guesses are the same as the old 
//so if it isn't then one life will be taken --see down below 

int length = strlen(words[random]); //length of chosen word
int guessedletter[9] = {0,0,0,0,0,0,0,0,0}; //placement of letters

int quit; //adding the variable for quitting early

char guess[9]; //array of the word with 9 spaces
char gletter; //the user's guess

//Welcome and rules text 
printf("\nWELCOME TO THE HANGMAN GAME.");
printf("\nTHE GAME STARTS NOW.");
printf("\nYou have 8 lives. Each time you guess wrongly, one life will be taken.");
printf("\nIf you wish to end the game, type 'quit'.\n");

//GAME LOOP

//while the guess is less than the length of the word, keep trying 
while (correct < length) { //the guesses available are less than the length of the word

 printf("\nNew turn... \nHangman word: \n");

 for (int i=0; i<length; i++) { //for loop for placing the chosen word in an array

		if (guessedletter[i] == 1) { // if the letter is guessed, it will print it 
			printf("%c",words[random][i]);
		}
		else {
			printf(" _ "); //if not, it'll be kept blank
		}
	}

	printf("\n");

	printf("Number of correct guesses: %d\n", correct);
	printf("Enter a letter: \n");
	scanf("%s", guess);

	if (strncmp(guess, "quit",4) == 0) { //comparing string guess with quit (4 char) and if it's recognised then 
		//make it equal to one and break out of the while loop 
		quit = 1;
		break;
	}
	gletter = guess[0];  //making sure only the first letter of the input is recognised 

	printf("Letter guessed: %c \n",gletter);

	//looping through the word comparing if the user
	//guessed it right 

	oldcorrect = correct;  //will be used to compare the no. of correct letters to each guess 

	for (int i=0; i<length; i++) {

		if (guessedletter[i] == 1) { //loop continues if the letter was already guessed
			continue;
		}

		if (gletter == words[random][i]) { //comparing the guess with the letter of the word
			guessedletter[i] = 1; //the letter becomes 1 in the array and will count++
			correct++;
		}
	}
	printf("\n");

	if (oldcorrect == correct) { //comparing the no. of correct guesses, so each turn the if the numbers are the same, 
		//it was a wrong guess and a life is lost.
		lives--;
		printf("Sorry, wrong guess \n");
		printf("You have %d lives left.\n",lives);
		if (lives == 0) { //if the lives equal 0, break out of the while loop 
			break; 
		}
	}
	else {
		printf("Correct!!\n"); //correct displayed after each correct guess 
	}

}

if ( quit == 1 ) { //giving the option of quitting early
	printf("\nThe user quit early.\n");
}
else if (lives == 0) { //now out of the while loop, if the lives are 0, then game over. 
	printf("\nGAME OVER. Word was: %s",
		words[random]);
}
else {
	printf("\nCONGRATS YOU WIN\n"); //winner text :) 
}

return 0;

}
