#include <stdio.h>
#include <string.h>
int main(){
	char sWord[12];
	int dVowels = 0, dLen=0;
	//strlen = returns current length of string
	printf("\n Hello human, give me word: ");
	scanf("%s", sWord); // no &
	dLen=strlen(sWord); // gets the length
	for (int i=0; i<dLen; i++){
		switch(sWord[i]){
		case 'a': 
		case 'e': 
		case 'i':
		case 'o':
		case 'u':
			dVowels++; 
			sWord[i]='X';
			break;
		default:
			break;
		}
	}
	printf("\n Your word has %d vowels. ", dVowels);
	printf("\n I'm allergic to vowels so I changed them for you. ");
	printf("\n Your word now is %s. \n", sWord);

	return 0;
}