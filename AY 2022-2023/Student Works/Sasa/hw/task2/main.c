#include <stdio.h>// includes standard input/output methods
#include <time.h>// includes time() function
#include <stdlib.h>// includes rand() and srand() functions
#include <string.h>// includes string methods
#include <ctype.h>


/*sketch of the hanged man

________
|     | 
|     O  
|     |
|    /|\\
|   / | \\
|    / \\
|   /   \\
|
|

-has 7 body parts, in order to win the game you can make max 6 mistakes 

*/
int main() {// start of main
	//printing the rules of the game:
printf("The hangman game \n");
printf("Rules: \n");
printf("You have to guess a word by inputing correct letters.\n");

srand(time(NULL));// this command enables a different random value every time

//declaring variables
char Word_bank[10][5]= {// string array for storing possible words
	"space",
	"earth",
	"entry",
	"sharp",
	"clown",
	"stack",
	"faith",
	"lunch",
	"stone",
	"sword"
};// there are 10 words possible, each 5 letters long

char word[6];// word to be guessed
char guessed_letter;// value will be inputed by the user
int guessed_correctly;
int game_lost=0;// assigning 0 to game_lost, game is not lost as long as the player is not hanged

int index = rand() % 10;// declaring and generating a random index between 0 and 9
    
strncpy(word, Word_bank[index], 5);// copying a string at random index of word bank into variable word
//printf("\n%s\n", word);


char letterline[] = "_____";// displays unguessed letters of the word



int mistakes_remained = 6;// counter for how many mistakes are left
// game can be played as long as its value is in interval [0,6]


while(1){// while loop with condition 1 iterates untill we break it
	if(game_lost) {// if game_lost is equal to 1 (it is true)
		break;// in case game is lost, break out of the loop
	}
	printf("The word to be guessed: %s\n", letterline);

	printf("Guess a letter: ");
	scanf(" %c", &guessed_letter);// inputting value for guess

    //checking if the user inputed a character that is a letter using isalpha() function of the ctype.h library
	while(isalpha(guessed_letter)==0){//repeats input as long as the inputed value is not a letter
		printf("please input a letter: \n");
		scanf("%c", &guessed_letter);
	}
	//technically the user could try to enter a string instead of the character, but the string is an array of characters
	//therefore by entering an array of characters you are entering at least 1 character as well 
	//this case is treated as a guess in this code
	/*if i wanted to check for strings as well, i would :
	-declare a string variable for input of fixed length
	-input string
	-check if its length is equal to 1, otherwise ask for input until 1 character string is inouted
	-then check if that character is a letter
	-this would be checked using a while loop in a similar way to this in the line 75
	-assign value of first element of that string to guessed_letter once the input is correct
	*/

	guessed_letter=tolower(guessed_letter);// converts letter to lowercase since it is compared to lowercase letters in the word

	guessed_correctly = 0;//This value will be 0 if the player does not guess correctly

	for (int i=0; i<5; i++){// iterates 5 times (=length of the word) 
		if(guessed_letter == word[i]){// in case guess is correct;
			letterline[i] = guessed_letter;// correct guess is displayed in letterline from now on
			guessed_correctly = 1;// guessed correctly is now equal to 1 (true)
		}
	}// end of for

	if(guessed_correctly == 0){// checks if the user did not guess correctly and the value of the variable is not 1
			printf("%c is not a part of the word", guessed_letter);
			mistakes_remained--;// number of mistakes decreases;
		}else printf("%c is a part of the word", guessed_letter);// in case the guess is correct prints message
		//letterline now contains guessed letter for this iteration


	if(!strcmp(word, letterline)){// checks if all the letters are guessed and letterline is equal to word
	//strcmp method from string.h library that compares 2 strings is used, strcmp returns 0 if the strings are equal	
	printf("\nYOU WON! The word is %s\n", word);
	break;// breaks out of loop since the game is over if the player wins


	}

	switch(mistakes_remained){// based on value of mistakes_remained variable prints a different 
		case 6:{//different cases represent different values of mistakes_remained
			printf("\n________");
			printf("\n|     | ");
			printf("\n|");
			printf("\n|");
			printf("\n|");
			printf("\n|");
			printf("\n|");
			printf("\n|");
			printf("\n|");
			printf("\n|\n");

	
			break;
		}

		case 5:{
			printf("\n________");
			printf("\n|     | ");
			printf("\n|     O ");
			printf("\n|");
			printf("\n|");
			printf("\n|");
			printf("\n|");
			printf("\n|");
			printf("\n|");
			printf("\n|\n");


			break;
		}
			
		case 4:{
			printf("\n________");
			printf("\n|     | ");
			printf("\n|     O ");
			printf("\n|     |");
			printf("\n|     |");
			printf("\n|     |");
			printf("\n|");
			printf("\n|");
			printf("\n|");
			printf("\n|\n");


			break;
		}

		case 3:{
			printf("\n________");
			printf("\n|     | ");
			printf("\n|     O ");
			printf("\n|     |");
			printf("\n|    /|");
			printf("\n|   / |");
			printf("\n|");
			printf("\n|");
			printf("\n|");
			printf("\n|\n");

			break;
		}

		case 2:{
			printf("\n________");
			printf("\n|     | ");
			printf("\n|     O ");
			printf("\n|     |");
			printf("\n|    /|\\");
			printf("\n|   / | \\");
			printf("\n|");
			printf("\n|");
			printf("\n|");
			printf("\n|\n");


			break;
		}

		case 1:{
			printf("\n________");
			printf("\n|     | ");
			printf("\n|     O ");
			printf("\n|     |");
			printf("\n|    /|\\");
			printf("\n|   / | \\");
			printf("\n|    /");
			printf("\n|   / ");
			printf("\n|");
			printf("\n|\n");


			break;
		}

		case 0:{//when 7 mistakes are made, and the game is lost
			printf("\n________");
			printf("\n|     | ");
			printf("\n|     O ");
			printf("\n|     |");
			printf("\n|    /|\\");
			printf("\n|   / | \\");
			printf("\n|    / \\");
			printf("\n|   /   \\");
			printf("\n|");
			printf("\n|\n");
			printf("\nGAME OVER! The word was %s \n", word);
			game_lost=1;//player is hanged, asigning value 1 to game_lost variable
			break;
		}

		default://default case that should not happen
			printf("\nOoops!Something went terribly wrong.\n");	
 
    
	}//end of switch
	

}//end of while


return 0;//returns 0 if the program compiled correctly
}//end of main
