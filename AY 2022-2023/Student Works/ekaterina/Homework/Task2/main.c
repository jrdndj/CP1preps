#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<time.h>


//declaration theese are global variables visible trough the whole code

int dNumGuess;
char guess[20];
char dWordsArray[6][20];
int dRandomIndex;

//if the user decides to quit the game
int quit=0;


//void funtion that draws the hanged man
void drawhangman(int mistakes)
{
//switch case that prints the figure according to the mistakes the user entered
 switch (mistakes) {


     case 1 :
      printf("\n");
      printf("\t\t\t  _______\n");
      printf("\t\t\t  |/   | \n");
      printf("\t\t\t  |    O \n");
      printf("\t\t\t  |\n");
      printf("\t\t\t  |\n");
      printf("\t\t\t  |\n");
      printf("\t\t\t__|_________\n\n");
     break;

     case 2 :
      printf("\n");
      printf("\t\t\t  _______\n");
      printf("\t\t\t  |/   | \n");
      printf("\t\t\t  |    O \n");
      printf("\t\t\t  |    |\n");
      printf("\t\t\t  |    |\n");
      printf("\t\t\t  |\n");
      printf("\t\t\t__|_________\n\n");
     break;

     case 3:
      printf("\n");
      printf("\t\t\t  _______\n");
      printf("\t\t\t  |/   | \n");
      printf("\t\t\t  |    O \n");
      printf("\t\t\t  |   \\|/\n");
      printf("\t\t\t  |    | \n");
      printf("\t\t\t  |\n");
      printf("\t\t\t__|_________\n\n");
     break;

     case 4 :
      printf("\n");
      printf("\t\t\t  _______\n");
      printf("\t\t\t  |/   | \n");
      printf("\t\t\t  |    O \n");
      printf("\t\t\t  |   \\|/\n");
      printf("\t\t\t  |    | \n");
      printf("\t\t\t  |   /\n");
      printf("\t\t\t__|_________\n\n");
     break;

     case 5 :
	  printf("\n");
      printf("\t\t\t  _______\n");
      printf("\t\t\t  |/   | \n");
      printf("\t\t\t  |    O \n");
      printf("\t\t\t  |   \\|/\n");
      printf("\t\t\t  |    | \n");
      printf("\t\t\t  |   / \\\n");
      printf("\t\t\t__|_________\n\n");
     break;

     case 6 :
      printf("\n");
      printf("\t\t\t  _______\n");
      printf("\t\t\t  |/   | \n");
      printf("\t\t\t  |    X \n");
      printf("\t\t\t  |   \\|/\n");
      printf("\t\t\t  |    | \n");
      printf("\t\t\t  |   / \\\n");
      printf("\t\t\t__|_________\n\n");
     break;

 }
}
// a function that only prints a comment according to the way the game was played
void Result(){

	
	//if the user lost all the 'lives' or the number of guesses
	if(dNumGuess ==0)
	{
		printf("\n Sorry! :( Try again!");
	}//end else-if
	else
	{
		printf("\n  :) \n");
	}//end-else
}

int main(){


//generatting a random number using function time I used https://stackoverflow.com/questions/822323/how-to-generate-a-random-int-in-c
srand(time(NULL));

	//filling the array with words to guess
    char dWordsArray[6][20]={ "christmas",
		"family",
		"love",
		"chocolate",
		"wine",
		"warmness"
	};

	//gives us a random word from the array  https://stackoverflow.com/questions/46675878/random-number-from-array-c
	dRandomIndex= rand() % 6;
	int dIndex=0;
	int mistakes=0;

	//declaring some variables

	int dNumCorrect=0;
	int oldCorrect=0;
	dNumGuess=6;

	//getting the length of the world we have selected
	int dLenWord=strlen(dWordsArray[dRandomIndex]);

	//we need a method to keep track which character are correct and which are not correct 
	//the idea I used here for an emty array is from this series of video tutorials and then tried to write it and modify it in my own way 
	//https://www.youtube.com/watch?v=sitn00wQMrg
	//https://www.youtube.com/watch?v=qYQC-__8hO8
	//https://www.youtube.com/watch?v=hhGGsjyEUZQ
	
	int cLetterGuessed[10]={0,0,0,0,0,0,0,0,0,0};

	//if the user quits
	//int quit=0;
	char cLetter;

	
	 printf("Keep in mind that you have 6 tries! Good luck!");


	//game-loop
	while(dNumCorrect<dLenWord)
	{
		//printing the word but with underlines 
		printf("Hangman word:");

		//loop that goes trough the whole array
		for(int i=0;i<dLenWord;i++){

			//in case the user guessed the correct letter,the letter is put in the place it located in the word
			if(cLetterGuessed[i]==1){
				printf("%c",dWordsArray[dRandomIndex][i]);

			}//end-if
			else
			{
				//prints underlines
				printf("_");

			}//end-else

		}//end-for
		printf("\n"); //printing empty line

		//informs the user how many correct guesses they attemted
		printf("\n Number Correct so far:%d\n",dNumCorrect);

		//asking the user to guess a word
		//stroing the letter in the array by using function fgets
		printf("Enter a guess letter:");
		fgets(guess,20,stdin);

		//condition to check if the first entry into the program is a number  
		/
		if(guess[0]>='0' && guess[0]<='9')
		{
			printf("\n You enetered a number!Please eneter a small letter!");
			quit=1; //setting quit to 1 to leave the game if a number is entered
			break;
		}//end-if

		
		


		//stroing the letters the user enters
		cLetter=guess[0];


		//save number of correct values into another variable
		oldCorrect=dNumCorrect;

		//if the letter the user entered is enywhere in the word
		for(int i=0; i<dLenWord;i++)
		{

			if(cLetterGuessed[i]==1){ //skipping an iteration of the cycle if the letter is already found
				continue;
			}
			//the letter enetered by the user is the same letter as the one in the word
			if(cLetter==dWordsArray[dRandomIndex][i])
			{
				cLetterGuessed[i]=1; //changing the 0's into 1's if the letter is the same
				dNumCorrect++;
			}

		}

		//we need to lose a try if the NumCorrect did not changed so we decrease dNumGuess and increse the mistakes 
		if(oldCorrect==dNumCorrect)
		{
			mistakes++;
			dNumGuess--;

			//informing the user they made a wrong guess and printing the hangman according to the number of mistakes(calling function)
			printf("\nWrong guess! You lost a try!");

			drawhangman(mistakes);

			//in case the user run out of tries(the number of guesses went to 0)
			if(dNumGuess==0)
			{
				//user lost the game , we use break to leav
				printf("GAME LOST!\n");
				break;
			}//end-if
		}//end-if
		else
		{
			//in case the user guessed the letter 
			printf("\n Correct guess! Well done! :)");

		}//end-else
	}//end-while

//calling void function Result to print a statement
Result();

	return 0;
}//end-main
