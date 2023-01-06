#include <stdio.h>
#include <string.h>

int main(){
	//declare variables
	char sWord[12];
	int dVowels = 0, dLen=0;
	//prompt the user for input
	printf("Pls enter a word (max 12 chars)\n");
	scanf("%s", sWord);
	dLen = strlen(sWord);
	printf("\nYou have entered the word %s.\n", sWord);

	for (int i = 0; i < dLen; ++i){
		switch( sWord[i] ){
		case 'a':
		case 'i':
		case 'o':
		case 'u':
		case 'e':
			dVowels++;
			sWord[i]='X';
			break;
		case '\0': break;
		default: break;
		}//endswitch
	}//endfor

	printf("\nIt has %d vowels.\n", dVowels);
	printf("I censored them for you.");
	printf("\nYour word is now %s.\n", sWord);



	return 1;
}//endmain