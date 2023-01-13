#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>//for tolower
#include <stdbool.h> //for bool
//drawing stick figure for every wrong guess
void StickFigure(int WrongLetterCtr){
	char Figure[6]={'(',')','/','|','\\','/','\\','\0'};
	switch(WrongLetterCtr)
	{
		case 0:printf("\t _________\n"
	       "\t|         |\n"
	       "\t|        %c \n"
	       "\t|        \n"
	       "\t|        \n"
	       "\t|             \n"
	       "\t|             ", 
	       Figure[0]);
		break;
	case 1:
		printf("\t _________\n"
	       "\t|         |\n"
	       "\t|        %c %c\n"
	       "\t|        \n"
	       "\t|        \n"
	       "\t|             \n"
	       "\t|             ", 
	       Figure[0], Figure[1]);
		break;
	case 2:
		printf("\t _________\n"
	       "\t|         |\n"
	       "\t|        %c %c\n"
	       "\t|        %c\n"
	       "\t|        \n"
	       "\t|             \n"
	       "\t|             ", 
	       Figure[0], Figure[1], Figure[2]);
		break;
	case 3:
		printf("\t _________\n"
	       "\t|         |\n"
	       "\t|        %c %c\n"
	       "\t|        %c%c\n"
	       "\t|        \n"
	       "\t|             \n"
	       "\t|             ", 
	       Figure[0], Figure[1], Figure[2], Figure[3]);
		break;
	case 4:
		printf("\t _________\n"
	       "\t|         |\n"
	       "\t|        %c %c\n"
	       "\t|        %c%c%c\n"
	       "\t|        \n"
	       "\t|             \n"
	       "\t|             ", 
	       Figure[0], Figure[1], Figure[2], Figure[3], Figure[4]);
		break;
	case 5:
		printf("\t _________\n"
	       "\t|         |\n"
	       "\t|        %c %c\n"
	       "\t|        %c%c%c\n"
	       "\t|        %c \n"
	       "\t|             \n"
	       "\t|             ", 
	       Figure[0], Figure[1], Figure[2], Figure[3], Figure[4], Figure[5]);
		break;
	case 6: 
		printf("\t _________\n"
	       "\t|         |\n"
	       "\t|        %c %c\n"
	       "\t|        %c%c%c\n"
	       "\t|        %c %c \n"
	       "\t|             \n"
	       "\t|             ", 
	       Figure[0], Figure[1], Figure[2], Figure[3], Figure[4], Figure[5], '\\');
		//for some reason it didn't work with Figure[6] even though it's the same character
		break;
	default: 
		break;
	}//end switch
}//end function

//checks if letter is contained in word
bool ContainsString(char Guess, char *Word){
	bool Check=false;
	for(int i=0;i<strlen(Word);i++){
		if(tolower(Guess)==tolower(Word[i])){
			Check=true;
			break;
		}//end if
	}//end for
	return Check;
}//end function

//changes _ to correct guess
//const char * to return string
const char *ChangeUnderscore(char Guess, char *Word, char *UnderArr){
	for(int i=0;i<strlen(Word);i++){
		if(tolower(Guess)==tolower(Word[i])){
			UnderArr[i]=Guess;
		}//end if
	}//end for
	return UnderArr;
}
//checks if to strings are the same (case insensitive)
bool Same(char *Guess, char *Word){
	bool Check=true;
	for(int i=0;i<strlen(Word);i++){
		if(tolower(Guess[i])!=tolower(Word[i])){
			Check=false;
			break;
		}//end if
	}//end for
	return Check;
}

int main()
{
	//string array with movies
	char Words[][10]={"Godzilla","Matrix","Alien","Avatar","Terminator"};
	printf("Hello, welcome to hangman!\n");
	//picking random word
	int ChooseWord=rand()%5;
	char *GuessWord=Words[ChooseWord];
	//replacing the word with _
	char Underscores[strlen(GuessWord)+1];
	for (int i = 0; i <strlen(GuessWord) ; ++i)
	{
		Underscores[i]='_';
	}//end for
	printf("Word you need to guess is %s\n", Underscores);
	
	int WrongLetterCtr=-1;
	char Guess;
	//while loop to control number of guesses
	while(WrongLetterCtr<6){
		printf("Enter a letter\n");
		scanf("%c",&Guess);
		getchar();
		
		if(ContainsString(Guess,GuessWord)==true){
			//to change Underscores to the new string containing the guess
			strncpy(Underscores,ChangeUnderscore(Guess, GuessWord, Underscores),10);
			//checks if you guessed the word
			if(Same(Underscores,GuessWord)==true){
					printf("You won the game! :)\n");
					break;
				}//end inner if
			printf("Word after change is: %s \n", Underscores);
			continue;
		}//end outer if
		if(ContainsString(Guess,GuessWord)==false){
		//if guess is wrong it it increases the wrong guesses counter
			WrongLetterCtr++;
			//draws stick figure
			StickFigure(WrongLetterCtr);
			printf("Your word is still: %s \n", Underscores);
			if(WrongLetterCtr==6){
				printf("You lost :( \n");
				break;
			}
			continue;
		}//end if
	}//end while
	return 0;
}
