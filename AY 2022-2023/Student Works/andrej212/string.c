//ask the user for a word
//the program will scan each characters for vowels (a,e,i,o,u)
//we will print the number of vowels
//we will change each vowels to x
#include <stdio.h>
#include<string.h>
int main(){

	char sWord[12];
	int dVowels=0;

	//prompt the user for an input
	printf("\n Please give me a word:");
	scanf("%s", sWord); //no ampersand & //scaning per string

	for (int i=0; i<strlen(sWord); i++){
		switch(sWord[i]){ //scaning per characters
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			dVowels++;
			sWord[i]='X';
			break;
		default: break;

		}  //dswitch
	} //endfor
		printf("\n There are %d vowels in your word.", dVowels);
		printf("\n Im alergic to them so I changed them for you.");
		printf("\n Your word is now spelled as %s. \n", sWord);

	return 0;
	
}