#include<stdio.h>
#include<string.h>//so we use our string opperations such as strlen


int main(){
	//declare variables
	char sWord[12]; 
	int dVowels=0, dLen=0;


	//promt the user for an input
	printf("\n Please enter a worf (max 12 chars): ");
	scanf("%s", sWord); //no & ampersand
	dLen= strlen(sWord);

	//lets print the word to confirm
	printf("\n You have entered the word: %s \n ", sWord);

	//to analyse each char in the string we will use a for loop
	for(int i=0; i<dLen; i++){
		switch( sWord[i] ){
		case 'a':
		case 'e':
		case 'i':
		case '0':
		case 'u':
			dVowels++;
			sWord[i] = 'X';
			break;
		case '\0': break;
		default: break;
		}//end switch
	}//end for loop
	//print the values
	printf("\n Your word has %d vowels in it. ", dVowels);
	printf("\n Im allergic to them so I coensord them for you.");
	printf("\n Your new word is now %s.Hope you like it. \n ", sWord);
	return 0;
}//end main