/*This program receives an input string from the user
and analyzes the characters in it. It counts the number of 
vowels and consonants. 

commands used: strlen, puts
	vowels = a,e,i,o,u
	everything else are consonants. 
*/
#include<stdio.h>
#include<string.h>

int main(){
	//declare variables
	char sInput[12];
	int dVowels=0, dCons=0, dLen=0;

	printf("\n Enter 12-character word please: ");
	scanf("%s", sInput);
	//store the length in dLen
	dLen = strlen(sInput);

	for(int dCtr=0; dCtr<dLen; dCtr++){
		printf("\n Checking %c ", sInput[dCtr]);
		switch( sInput[dCtr] ){
			case 'a': 
			case 'A': 
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
				dVowels++; break;
			default: 
				dCons++; break;
		}//endswitch
	}//endfor
	printf("\n The word %s has %d vowels and %d consonants. ", sInput, dVowels,dCons);
	return 0; 
}//endmain