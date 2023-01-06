/*
	A program asks the user to input a word
	Check each characters if they are vowels
	Count the vowels
	change all vowels into x
*/
#include <stdio.h>
#include <string.h>
int main(){
	//decklare variables
	char sWord[12];
	int dVowels=0, dLen=0;
	//strlen = returns the current length of the string
	printf("\n Hello human, give me word: ");
	scanf("%s", sWord); //no ampersand &
	dLen = strlen(sWord); // gets the length

	for (int i=0; i<dLen; i++){
		switch(sWord[i]){
		case 'a' : 
		case 'e' : 
		case 'i':
		case 'o':
		case 'u':
			dVowels++; 
			sWord[i]='X';
			break;
		case '\0': break;
		default: break;
		}
	}
	printf("\n Your word has %d vowels. ", dVowels);
	printf("\n Im alergic to vowels so I changed them. ");
	printf("\n Your word is now %s. \n", sWord);

	return 0;
}
