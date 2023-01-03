//task2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
}//end function	}

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
	for (int i = 0; i <strlen(GuessWord) ; i++)
	{
		Underscores[i]='_';
	}//end for
	
	printf("Word you need to guess is %s\n", Underscores);
	int WrongLetterCtr=0;
	char Guess;
	
	while(WrongLetterCtr<6){
	//asking for user input
		printf("Enter a letter\n");
		scanf("%c",&Guess);
		getchar();
		printf("Your letter is %c\n",Guess);
		//I will probably add a function to see if the letter is contained in the word
		//Then if the guess is correct I'd probably need another function to modify the
		//underscores array
		
		//if the guess is wrong (i still dont have the function for the if statement)
		//so im leaving it like this so the loop isn't infinite when the program is 
		//compiled
		WrongLetterCtr++;
		
	}//end while
	
	//but i think this is a good time to commit

	return 0;
}
