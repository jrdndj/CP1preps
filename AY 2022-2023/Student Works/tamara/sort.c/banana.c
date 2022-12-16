#include<stdio.h>
#include<string.h> //so we can use our string operations such as strlen

int main(){
	//declare variable
	char sWord[12];
	int dVowels=0, dLen=0;

	//prompt the user for an input
	printf("\n Please enter a word (max 12 chars): ");
	scanf("%s", sWord); //no & ampersand
	dLen=strlen(sWord);


	//lets print the word to confirm
	printf("\n You have entered the word: %s \n", sWord);

	//to analyse each character in the string we will use a for loop
	for(int i=0; i<dLen; i++){
		switch( sWord[i] ){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			dVowels++;
			sWord[i] = 'X';
			break;
		case '\0': break;
		default: break;
		}//endswitch

	}//endfor

	//print the values
	printf("\n Your word has %d vowels in it. ", dVowels);
	printf("\n Im allergic to them so I censored them for you. ");
	printf("\n Your new word is now %s. Hope you like it. ", sWord);

	return 0;
}//endmain