/* ask the user for a word the program will scan each characters for vowels (a, e, i, o)
		we will print the num of vowels
		we will change each vowels to X*/
#include <string.h>
#include <stdio.h>

int main() {
	//declare vars
	char sWord[12];
	int dVowels=0;

	//ask user for input
	printf("\n Please, give me a word: ");
	scanf("%s", sWord); //no ampersand because it's a "string"

	//for loop to count number of vowels in a word + replace vowels with X char
	for (int i = 0; i < strlen(sWord); i++){
		switch(sWord[i]){
		case 'a': 
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			dVowels++;
			sWord[i]='X';
			break;
		default:break;
		}
	}//endofloop

	//print the number of vowels in a word
	printf("\n There are %d vowels in your word. ", dVowels);
	//changing vowels to X in a word
	printf("\n I'm allergic to them so I changed them for you. ");
	printf("\n Your word is now spelled as %s. \n", sWord);

	return 0;
}//endofmain