/* 
	This C program receives a c-string input (word) (no spaces)
	and then we shall do an analysis of this word 
	we have to set a limit for the array size
*/
#include<stdio.h>

int main(){
	//declare variables 
	char sInput[12];
	int dVowelCount = 0, dConsonantCount = 0;

	//prompt user
	printf("Dear user, please enter any 12-character word, no spaces:  ");
	scanf("%s", sInput); //no ampersand

	//for loop where we will scan each characters 
	//count the number of vowels and count the number of consonants
	for( int dCtr = 0; dCtr < 12; dCtr++ ){
		printf("\n Checking %c", sInput[dCtr]);
		switch( sInput[dCtr] ){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				dVowelCount++; 
				break;
			case '\0': break;  //we can use the c fucntion to check isVowel, isConsonant 
			default: 
				dConsonantCount++; 
				break;
		}//endswitch
	}//endfor 
	printf("\n The word %s has %d vowels and %d consonants. \n ", sInput, dVowelCount, dConsonantCount);
	return 0; 
}