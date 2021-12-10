/*This C program receives a string input from the user
and we shall scan each character and print the number of vowels and consonants
in the string
vowels = a,e,i,o,u
consonant = anything else not a vowel 
*/
#include<stdio.h>
#include<string.h>

int main(){
	//declare variables
	char sInput[12];
	int dVowels=0, dCons=0, dLen=0;

	puts("\n Please enter a word max 12 characters: ");
	scanf("%s", sInput); //no ampersand & 

	//store the size of sInput in integer dLen
	dLen = strlen(sInput);
	for(int dCtr=0; dCtr<dLen; dCtr++){
		switch( sInput[dCtr] ){
			case 'a': 
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				dVowels++; break; 
			default: 
				dCons++; break;
		}//endswitch
	}//end for loop
	printf("\n The word %s has %d vowels and %d consonants. ", sInput, dVowels, dCons);
	return 0;
}