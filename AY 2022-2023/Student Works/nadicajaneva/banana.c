#include<stdio.h>
#include<string.h> //so we can use our string operations such as strlen

int main(){
	//declare variables
	char sWord[12];
	int dVowels=0, dLen=0;

	//prompt the user for an input
	printf("\n Please enter the word (max 12 chars): ");
	scanf("%s", sWord); //no & ampersand
	dLen = strlen(sWord);

	//lest print the word to confirm
	printf("\n You have entered the word: %s \n ", sWord);

	//to analyse each character in the string we will use a for loop
	for(int i=0; i<dLen; i++){
		// one way is: if(sWord[i] == 'a' || sWord[i] == 'e')
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
		}//end switch
	}//end for

	//print the values
	printf("\n Your word has %d vowels in it. ", dVowels);
	printf("\n Your new word is now %s. Hope you like it. \n ", sWord);
return 0;
}//end main