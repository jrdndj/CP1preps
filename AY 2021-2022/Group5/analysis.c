/* this program will receive an input from the user (word input)
and it will analyse how many vowels and consonants we have in the string

vowels = a,e,i,o,u
anything else are consonants 
*/
#include<stdio.h>
#include<string.h>

int main(){
	//declare our variables
	char sInput[12];
	int dVowels = 0, dCons = 0, dSize=0;

	puts("\n Please enter a word up to 12 characters: ");
	scanf("%s", sInput); //no ampersand &

	//get the size of the word input
	dSize = strlen(sInput);

	for(int dCtr=0; dCtr<dSize; dCtr++){
		printf("\n Checking %c : ", sInput[dCtr]);
		switch( sInput[dCtr] ){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				dVowels++; break; //count as vowels
			default: 
				dCons++; break; //count as consonants
		}//endcase
	}//endfor
	printf("\n The word %s has %d vowels and %d consonants. ", sInput, dVowels, dCons);
	return 0;
}