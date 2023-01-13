#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>
#include<ctype.h>
#define MAX_MISTAKES 4

int main(){

char *PossibleWords[]={"onomatopeia","fireworks","acumulator","rakija","tractor","crocodile"}; //possible words to play with
char WordToGuess[11];
char UserGuess;

srand(time(0)); //using time to pick random numbers

int RandomSloth = rand() % 6; // searching for randokm sloth 0,1,2,3,4,5 thats why im deviding with %6
int wordlength = strlen(PossibleWords[RandomSloth]); //is length of array possible words at random sloth
int Mistakes=0;
int Correct=0;

strcpy(WordToGuess, PossibleWords[RandomSloth]); //copying the word from array possible word wo string playingword and printing _ for its length
for(int i=0; i<wordlength; i++){
	printf("_");
}

int len = strlen(WordToGuess);

for (int i = 0; i < len; i++) {
    WordToGuess[i] = toupper(WordToGuess[i]);
}


while(Mistakes!=MAX_MISTAKES){
printf("\ntry to guess a letter of this word \n");
scanf("%c",&UserGuess);
UserGuess=toupper(UserGuess); //coverting letter to be uppercase

for(int i=0;i<wordlength; i++){
		if(UserGuess==WordToGuess[i]){
			printf("%c",WordToGuess[i]); 
			Correct++;
		}
		else{
			Mistakes++;
		}
	}
	
	if(Correct==wordlength){
		printf("YOU HAVE WON!!");  //exit if correct 
		exit(0);
	}
	if(Mistakes==MAX_MISTAKES){ //exits when number of mistakes equals max mistakes 
	printf("   ______\n");
  	printf("   |     |\n");
  	printf("   |     O\n");
  	printf("   |    /|\\\n");
  	printf("   |    / \\\n");
  	printf("___|___\n");
		printf("\n  You lost");
		exit(0);
	}

	if(Mistakes==1){
	printf("   ______\n");
 	printf("   |     |\n");
  	printf("   |     O\n");
   	printf("   |    \n");
  	printf("   |    \n");
  	printf("___|___\n");
	}

	if(Mistakes==2){
	printf("   ______\n");
  	printf("   |     |\n");
  	printf("   |     O\n");
  	printf("   |     |\n");
  	printf("   |    \n");
  	printf("___|___\n");

	}

	if(Mistakes==3){
	printf("   ______\n");
  	printf("   |     |\n");
  	printf("   |     O\n");
  	printf("   |    /|\\\n");
  	printf("   |    / \n");
  	printf("___|___\n");
	}
	if(Mistakes==4){
	printf("   ______\n");
  	printf("   |     |\n");
 	printf("   |     O\n");
  	printf("   |    /|\\\n");
  	printf("   |    / \\\n");
  	printf("___|___\n");
	}
	

}




	return 0;
}