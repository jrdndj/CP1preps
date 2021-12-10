/* This program shall analyze the input string from the user
counting the vowels and counting the consonants

vowels - a,e,i,o,u
consonants - everything else
*/
#include<stdio.h>
#include<string.h>

int main(){
	//declare variables
	char sInput[12];
	int dVowels = 0, dCons = 0; 

	printf("\n Please enter a word, max 12 characters: ");
	scanf("%s", sInput); //no need for ampersand &
	
	//strlen(sInput); // this gets the size of the input in sInput

	for( int dCtr=0; dCtr<strlen(sInput); dCtr++ ){
		printf("\n Checking %c ", sInput[dCtr]);
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
	}//endfor
	printf("\n The word %s has %d vowels and %d consonants. \n", sInput, dVowels, dCons);
	return 0; 
}//endmain