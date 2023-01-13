#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void printFigure(int failinFigure);  //caliing the function  

int main(){

	srand(time(0));
	
	char guessWords[][16]={"family","programming","smile","pizza","koper","butterfly"};
	//index for random words
	int randomIndex = rand() % 6;//Random number generator, we write %6 because we have 6 word and it will rendomly choose 1 word from those 6.
	
	int numLives = 0;
	int numCorrect = 0;
	int oldCorrect = 0;
	
	int lengthOfWord = strlen(guessWords[randomIndex]);
	//			0 1 2 3 4 5 6 7 8 9 10 
	// 			p r o g r a m m i n g 
	int letterGuessed[11] = { 0,0,0,0,0,0,0,0,0,0,0} ;
	
	int quit;
	
	int loopIndex = 0;
	
	char guess[16];
	char letterEntered;
	
	/*printf("guessWords:%s randomIndex:%d lengthOfWord:%d\n\n", guessWords[randomIndex],randomIndex,lengthOfWord);*/
	
	//GAME LOOP
	while(numCorrect < lengthOfWord)
	{
	printf("\nHANGMAN WORD:");
	//For loop for printing the guessed letters and empty spaces 
		for(loopIndex=0;loopIndex<lengthOfWord;loopIndex++){
			if(letterGuessed[loopIndex]==1){
				printf("%c",guessWords[randomIndex][loopIndex]);
			}else{
				printf("_");
			}
		}
		
	printf("\n");
	
	printf("Number of correct answers so far:%d\n",numCorrect);
	printf("Please enter a guess letter:");
	fgets(guess,16,stdin);//we store the string 
	
	if(strncmp(guess,"quit",4)==0) {//If the user enters quit the programm closes
		quit=1;
		break;
	}
	
	letterEntered=guess[0];
	printf("letterEntered:%c\n",letterEntered);
	
	oldCorrect = numCorrect;
	for(loopIndex=0;loopIndex<lengthOfWord;loopIndex++)	{//for loop that checks every letter in the word
		if(letterGuessed[loopIndex]==1){//if the letter is not correct it continues the game untill you are with no lives left
			continue;
		}
		if(letterEntered == guessWords[randomIndex][loopIndex]) {//if the letter is correct number of correct letters is increasing
			letterGuessed[loopIndex]=1;
			numCorrect++;
		}
	}
	
	if(quit==1) {//If the user quits prining a message
		printf("You quit too early\n");
		exit(1);
	}else if(numLives==9){//if the user makes mistake 9 times , the game is lost.
	printf("\nYOU LOST, the correct word was:%s\n",guessWords[randomIndex]);
	exit(1);
	}
	
	if(oldCorrect == numCorrect) {//checking if the user entered correct letter
		numLives++;//if its incorrect number of lives is increasing
		printf(" Your guess was wrong\n");
		printFigure(numLives);
	}
	
	if(numCorrect==lengthOfWord){//checking if the user entered all the correct letters
		printf("\nWINNER!!!\n");
		exit(1);
	}
}

	
			
return 0;
}

void printFigure(int failinFigure)    //This function clears the screen and prints the corresponding fail figure
{
	system("cls");
	
	switch(failinFigure)
	{
		case 0:
			printf("\n\n\n\n\n        \n        \n        \n     __|__");
			break;
		case 1:
			printf("\n\n\n\n\n       |\n       |\n       |\n     __|__");
			break;
		case 2:
			printf("  _ _ _\n       |\n       |\n       |\n       |\n       |\n       |\n       |\n     __|__ ");
			break;
		case 3: 
			printf("  _ _ _  \n |     | \n |     | \n       |\n       |\n       |\n       |\n       |\n     __|__ ");
			break;
		case 4:
			printf("  _ _ _  \n |     | \n |     | \n( )    |\n       |\n       |\n       |\n       |\n     __|__ ");
			break;
		case 5:
			printf("  _ _ _  \n |     | \n |     | \n( )    |\n/      |\n       |\n       |\n       |\n     __|__ ");
			break;
		case 6:
			printf("  _ _ _  \n |     | \n |     | \n( )    |\n/ \\    |\n       |\n       |\n       |\n     __|__ ");
			break;
		case 7:
			printf("  _ _ _  \n |     | \n |     | \n( )    |\n/|\\    |\n |     |\n |     |\n       |\n     __|__ ");
			break;
		case 8:
			printf("  _ _ _  \n |     | \n |     | \n( )    |\n/|\\    |\n |     |\n |     |\n/      |\n     __|__ ");
			break;
		case 9:
			printf("  _ _ _  \n |     | \n |     | \n( )    |\n/|\\    |\n |     |\n |     |\n/ \\    |\n     __|__ ");
			break;
	}
}	
	
	

	
