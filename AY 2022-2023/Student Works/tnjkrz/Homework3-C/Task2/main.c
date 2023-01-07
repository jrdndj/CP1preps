/*
*
*		THE HANGMAN GAME
*
*/


/*
	Addition of useful headerfiles which
	allow for the use of printf, scanf, string functions,
	booleans, etc.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

/*

	Functions (Modular Programming)
	Source: Computer Practicum 2022/23, Week 12 - Functions, Slide 5-6
*/


//prints useful information/instructions for user
void infoPrint(){

	//Source for printf: Computer Practicum 2022/23, Week 9 - C, Slide 19

	printf("\nTo guess, just type a lowercase letter!\n"
			"If you would like to give up, type 'quit'.\n"
			"You make 7 mistakes and you are hung!\n");
}

void drawHangman(int wrong_guess_num){
	printf("Wrong Guesses: %d \n", wrong_guess_num);

	//Source: Computer Practicum 2022/23, Week 10 - C, Slide 3

	//use of switch statement to procedually draw the hangman, depending on num of wrong guesses
	switch(wrong_guess_num){
		case 1:
			printf("\n    __|__\n\n");
			break;
		case 2:
			printf("\n      |\n      |\n      |\n      |\n      |\n    __|__\n\n");
			break;
		case 3:
			printf("\n -----|\n      |\n      |\n      |\n      |\n    __|__\n\n");
			break;
		case 4:
			printf("\n -----|\n |    |\n o    |\n      |\n      |\n    __|__\n\n");
			break;
		case 5:
			printf("\n -----|\n |    |\n o    |\n I    |\n      |\n    __|__\n\n");
			break;
		case 6:
			printf("\n -----|\n |    |\n o    |\n-I-   |\n      |\n    __|__\n\n");
			break;
		case 7:
			printf("\n -----|\n |    |\n o    |\n-I-   |\n/ /   |\n    __|__\n\n");
			break;
		default:
			break;	
	}
}


/*


	Main Function
	Source: Computer Practicum 2022/23, Week 12 - Functions, Slide 7

*/

int main(){

	/*
		Variables

		Source: Computer Practicum 2022/23, Week 09 - C, Slides 14-15

		For Booleans: https://www.w3schools.com/c/c_booleans.php
		For arrays: Computer Practicum 2022/23, Week 10 - C, Slides 10-11
	*/

		//boolean variable to keep track if user made an incorrect guess
	bool incorrect_guess = true;

			//char that keeps track of user guess
			//the reason of length 4 is due to the option for user to type 'quit'
	char user_guess[4];

		//count to keep track of wrong attempts/guesses
	short int wrong_guess_count = 0;

		//creating array for the randomly selected word from multidimensional array
	char selected_word[9];

		//creating an array for representing the randomly selected word in question marks
	char question_marks_word[9];

	/*
		Creating multi(two)dimensional array w/ 6 rows and 9 columns.
		This is done because there is 6 words and, while the largest
		word is 6 characters long, in case you want to add longer, words,
		it is set to 9. If more words are added, another row should
		be added each time and if the word is bigger than 9 characters,
		increase it to the length of the biggest word.

		Source: www.programiz.com/c-programming/c-multi-dimensional-arrays
	*/

	char words[6][9] = {"abyss", "wyvern", "coal", 
	"fancy", "axiom", "nymph"};

	/*
		Pick random word in multidimensional array by picking
		a random index from 0 to 5 using rand() (and saving it to
		short int variable). Then, setting the selected_word variable
		to the word at the randomly picked index, and settng
		the question_marks_word to as many question marks as the length
		of the selected word.

		Source: https://stackoverflow.com/questions/33380282/how-does-rand-work-in-c
				https://stackoverflow.com/questions/822323/how-to-generate-a-random-int-in-c
	*/

		//initializes random
		srand(time(0));
		short int rand_index = (rand() % 6);


		//Source for for loop: Computer Practicum 2022/23, Week 9 - C, Slide 23
		//Source for strlen: Computer Practicum 2022/23, GitHub, CP1preps/Slides/09-14 C/Week 10 codes/Class Notes 11122020.txt
		for (int i = 0; i < strlen(words[rand_index]); ++i)
		{
			selected_word[i] = words[rand_index][i];
			question_marks_word[i] = '?';
		}

		//welcomes user to the game
		printf("Welcome to the Hangman Game!\n"
			"Best of luck!\n");

	/*


		Game Loop


	*/

		//game loops until user guesses correctly or runs out of guesses
		//Source for while loop: Computer Practicum 2022/23, Week 9 - C, Slide 24
		while (wrong_guess_count < 7){
			infoPrint(); //prints basic game info

			//prints useful information for user and takes user guess
			printf("\nHangman Word: %s \n", question_marks_word);
			drawHangman(wrong_guess_count);
			printf("Guess: ");

			//Source for scanf: Computer Practicum 2022/23, Week 9 - C, Slide 19
			scanf("%s", user_guess);

			/*
				Uses strcmp() function to compare if user guess
				is equal to 'quit'. If yes, the function will return 0,
				(hence the check for if function return value is == 0)
				and lets the user know what the word was
				and terminates program.

				Source: https://www.programiz.com/c-programming/library-function/string.h/strcmp
			
			*/

			//Source for if statement: Computer Practicum 2022/23, Week 9 - C, Slide 20
			if (strcmp(user_guess, "quit") == 0){
            	printf("The word was %s.\n"
            		"Better luck next time!", selected_word);
            	return 0;
            

            /*
				Checks if userGuess has a length of 1 and if the first 
				character is a lowercase letter a-z. If yes, checks
				if character is in randomly picked word.

				Source: https://beginnersbook.com/2017/09/c-program-to-check-whether-a-character-is-an-alphabet-or-not/
            */

        	} 

        	//Source for if else statement: Computer Practicum 2022/23, Week 9 - C, Slide 21
        	if (strlen(user_guess) == 1 && (user_guess[0] >= 'a' && user_guess[0] <= 'z')){
        		
        		//assigns true each time, in case it was set to false in previous loop iteration
        		incorrect_guess = true;

        		//loops through selected word and checks at each index if it is equal to user guess,
        		//if yes, set the same index in questionMarksWord to the user's guess and set incorrectGuess to false (it is a correct guess)
        		for (int i = 0; i < strlen(selected_word); ++i)
        		{
        			if (selected_word[i] == user_guess[0]) {
        				question_marks_word[i] = user_guess[0];
        				incorrect_guess = false;
        			}
        		}

        		//if no correct guess, add to wrong guess count
        		if (incorrect_guess){
        			wrong_guess_count++;
        		}

        		//if full word has been completed/guessed, victory!
        		if (strcmp(question_marks_word, selected_word) == 0){
        			printf("\nCongratulations!\n"
        				"You correctly guessed the word: %s\n", selected_word);
        			return 0;
        		}

        	} 

        	/*
				If the if statement before is false, the user is
				informed about their incorrect input and the next
				iteration of the while loop begins.
        	*/

        	else {
        		printf("\nWrong input!\n"
        				"Try again!\n");

        		//Source for for loop: Computer Practicum 2022/23, Week 10 - C, Slide 5
        		continue;
        	}

		}

		//if user runs out of guesses, game over
		drawHangman(wrong_guess_count);
		printf("\nYou ran out of guesses!\n"
                "The word was %s.\n"
                "Better luck next time!\n",selected_word);

		return 0;

}//end of main
