#include <stdio.h>
#include <string.h>
int main()
{
	//declare variables
	char sWord[13];
	int dVowels=0, dLen=0;

	//strlen = returns the current size of the string

	//prompt the user for an input
	printf("\nHello human this is Chat GPT-1, give me a word: ");
	scanf("%s", sWord); // no ampersand &


	//print the word
	printf("\nYou have entered the word: %s.", sWord);
	dLen = strlen(sWord);
	printf("\nThe word has %d characters.", dLen);

	//scan the word array
	for(int i=0; i<dLen; i++){
		switch(sWord[i]) {
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

	//print them to prompt the user
	printf("\nThe word has %d vowels\n", dVowels);
	printf("I am allergic to vowels so I censored them for you.\n");
	printf("Your word is now %s.\n", sWord);
	return 0;
}//endmain