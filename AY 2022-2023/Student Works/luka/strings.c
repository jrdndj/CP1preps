#include <stdio.h>

int main(){

	char sWord[12];
	int dVowels = 0, dLen = 0;


	printf("\nEnter a word: ");
	scanf("%s", sWord);

	dLen = strlen(sWord);

	for (int i = 0; i < dLen; ++i){
		switch(sWord[i]){
		case 'a': 
		case 'e': 
		case 'i': 
		case 'o':
		case 'u':
			dVowels++;
			sWord[i]='X';
			break;
		default: break;
		}
	}
		printf("\nYour word has %d vowels ",dVowels);
		printf("\nNew word: %s \n",sWord);
	




	return 0;
}
