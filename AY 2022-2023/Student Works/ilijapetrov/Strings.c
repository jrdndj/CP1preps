/*
A program asks the user to input a word.
Check each character if they arre vowels (a e i o u)
Count the vowels
Change all vowels into X
*/
#include<stdio.h>
#include<string.h>

int main()
{
	//declare variables
	char sWord[12];
	int dVowels=0, dLength=0;


	//strlen = returns th ecurrent length of the string 

	printf("\n Hello human. give me word: ");
	scanf("%s", sWord); //no &
	dLength = strlen(sWord); //gets the length

	for (int i = 0; i < dLength; i++){
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
		}//endswitch
	}//endfor

	printf("\n Your word has %d vowels.", dVowels);
	printf("\n Im allergic to vowels so I changed them for you.");
	printf("\n Your word is now %s. \n", sWord);
	


	return 0;
}//endmain