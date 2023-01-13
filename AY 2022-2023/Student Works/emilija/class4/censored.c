//input string, count vowels
//the program will check or change all vowels into the char 'X'
#include <stdio.h>
#include <string.h>

int main()
{
	//declare variables
	char sWord[13];
	int dVowels=0, dLen=0;

	//strlen = returns the current size of the string
	
	//prompt the user for an input
	printf("\nHello human, give me a word: ");
	scanf("%s", sWord);	//NO ampersand!

	//print the word
	printf("\nYou have entered the word: %s", sWord);

	dLen=strlen(sWord);
	printf("\nThe word has %d characters.", dLen);

	//scan the word array
	for (int i = 0; i < dLen; i++)
	{
		switch(sWord[i]){
			case 'a': 
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A': 
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				dVowels++;
				sWord[i]='X'; 
				break; 
			case '\0': break;
			default: break;
		}//endswitch
	}//endfor

	//print them to prompt the user
	printf("\nThe word has %d vowels.", dVowels);
	printf("\nIm allergic to vowels so I censored them for you.");
	printf("\nYour word is now %s \n", sWord);

	return 0;
}