/*
Ask the user for a word. 
The program will scan each characters for vowels (a,e,i,o,u,). 
We will print the numbers of vowels. 
We will print the number of vowels. We will change each vowels to X.
*/
#include <stdio.h>
#include<string.h>

int main(){
	//declare variable
	char sWord[12];
	int dVowels=0;

	//promt the user for an input
	printf("\n Please give me a word: ");
	scanf("%s", sWord); //no ampersend &

	for(int i=0; i<strlen(sWord); i++){
		switch( sWord[i] ){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			dVowels++;
			sWord[i] = 'X';
			break;
		default: break;
		}//endswitch
	}//endfor

	printf("\n There are %d vowels in your word. ", dVowels);
	printf("\n Im allergic to them so I changed them for you. ");
	printf("\n Your word is now spelled as %s. \n", sWord);

	return 0;
}//endmain
