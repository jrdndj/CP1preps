/* this program analyzes a 12-char string input from the user
vowel = a, e, i, o, u
everything are consonants*/
#include<stdio.h>
#include<string.h>

int main(){
	//declare variables
	char sInput[12];
	int dVowels = 0, dCons = 0;

	//prompt the user for input
	printf("\n Please enter any 12 char string: ");
	scanf("%s", sInput);

	//analysze it check for vowels 
	for(int dCtr=0; dCtr<12; dCtr++){
		printf("\n Scanning %c", sInput[dCtr]);
		switch( sInput[dCtr] ){
			case 'a': 
			case 'e':
			case 'i': 
			case 'o':
			case 'u': 
				dVowels++;
				break;
			case '\0': break;
			default: 
				dCons++;
				break;
		}//endswitch
	}//endforloop
	printf("\n The word %s has %d vowels and %d consonants. \n", sInput, dVowels, dCons);
	return 0; 
}//endmain