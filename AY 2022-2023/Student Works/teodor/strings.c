#include <stdio.h>
#include <string.h>

int main(){
	//declare variables
	char sWord[12];
	int dVowels=0, dLen=0;

	//strlen = returns the current length of the string

	printf("\n Hello human give me word: ");
	scanf("%s", sWord);// no ampersand &
	dLen = strlen(sWord); // gets the length

	for(int i=0; i<dLen; i++){
		switch( sWord[i] ){
		case 'a': 
		case 'e':
		case 'i':
		case 'o':
		case 'u': 
			dVowels++; 
			sWord[i]='X'; 
			break;
		case '\0': break;
		default: break;
		} //endswitch
	} //end for
	printf("\n Your word has %d vowels. ", dVowels);
	printf("\n I'm allergic to vowels so I changed them for you. ");
	printf("\n Your word is now %s. \n", sWord);

	return 0;
}