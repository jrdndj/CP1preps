/*
	We are going to ask the user to input a word.
	This program will analyze how many vowels (in the english language) does it
	have? (a,e,i,o,u).
	It will censor all vowels and change them to 'X'
	e.g. banana = bXnXnX
	Then print the final word.
*/

#include<stdio.h>
#include<string.h> // so we can use out string operations such as strlen

int main(){
	//declare variables
	char sWord[12];
	int dVowels=0, dLen=0;

	//prompt the user for an input
	printf("\n Please enter a word (max 12 chars): ");
	scanf("%s", sWord); //no & ampersand
	dLen = strlen(sWord);
	//lets print the word to confirm
	printf("\n You have entered the word: %s \n", sWord);

	//to analyse each character in the string we will use a for loop
	for (int i = 0; i < dLen; i++){
		//if(sWord[i] == 'a' || sWord[i] == 'e')
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
	 printf("\n I'm alergic to them so I censored them for you.  ");
	 printf("\n Your new word is now %s. Hope you like it. \n  ", sWord);
	return 0;
}//endmain