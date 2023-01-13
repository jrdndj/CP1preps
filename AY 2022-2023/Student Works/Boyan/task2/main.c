#include <stdio.h> //for input and output 
#include <string.h> // for string related functions
#include <stdlib.h> //We include this library in order to use the rand() fucntion
#include <time.h> // for time related functions 

#define NUM_WORDS 6 //we define a constant for the number of words
#define MAX_WRONG_GUESSES 6 //we define a constant for the numebr of wrong guesses 

// Function with a list of possible guess words
char* guessWords(void){

	//we declare an array of word options 

	char* wordOpts[6] = {"tennis", "television", "clock", "kitchen", "chimney", "laptop"};

	//index to generate random word
	int randomWord = rand() %NUM_WORDS;
	
	//we implement a return value to our fuction

	return wordOpts[randomWord];

}//end of guessWords

	void stick_figure(int wrong_guess){

		//drawing out the stick figure whenever there's a wrong guess, we use basic if and else statements and printf to draw stick figure
		printf("______");
		printf("|    |");
		if (wrong_guess == 1) {
			printf("|    O\n");
			printf("|     \n");
			printf("|     \n");
			printf("|     \n");
			printf("|     \n");
			printf("|     \n");
			printf("|_____\n");
		}
		else if (wrong_guess == 2) {
			printf("|    O\n");
			printf("|   /|\n");
			printf("|     \n");
			printf("|     \n");
			printf("|     \n");
			printf("|     \n");
			printf("|_____\n");
		}
		else if (wrong_guess == 3) {
			printf("|    O\n");
			printf("|   /|\\ \n");
			printf("|     \n");
			printf("|     \n");
			printf("|     \n");
			printf("|     \n");
			printf("|_____\n");
		}
		else if (wrong_guess == 4) {
			printf("|    O\n");
			printf("|   /|\\ \n");
			printf("|    |\n");
			printf("|    |\n");
			printf("|     \n");
			printf("|     \n");
			printf("|_____\n");
		}
		else if (wrong_guess == 5) {
			printf("|    O\n");
			printf("|   /|\\ \n");
			printf("|    |\n");
			printf("|   /|\n");
			printf("|     \n");
			printf("|     \n");
			printf("|_____\n");
		}
		else if (wrong_guess == 6) {
			printf("|    O\n");
			printf("|   /|\\ \n");
			printf("|    |\n");
			printf("|   /|\\ \n");
			printf("|     \n");
			printf("|     \n");
			printf("|_____\n");
		}
		else {
			
			printf("|     \n");
			printf("|     \n");
			printf("|     \n");
			printf("|     \n");
			printf("|     \n");
			printf("|     \n");
			printf("|_____\n");
		}


}

	void Hangman(){

		//defining variables...

		char *getWord = guessWords();
		int lenghtOfWord = strlen(getWord);
		int correct_guess = 0;
		



	}	

int main(int argc, char const *argv[]){

	srand(time(NULL));
	
	int correct_guess = 0;
	int wrong_guess = 0;
	while(wrong_guess != MAX_WRONG_GUESSES) {
		stick_figure(wrong_guess);
		Hangman();
		
		
	}




	
	return 0;
}
