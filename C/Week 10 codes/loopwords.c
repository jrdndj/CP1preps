/* 
	A c program that accepts c-strings from the user and performs an analysis of the input
	limit of characters is 25

	if there is a vowel, we will change that to X 
*/
#include<stdio.h>

int main(){
	//declare variables
	char sWord[25];
	int dVowelCount = 0; 

	//prompt user
	printf("Dear user, please enter any word, no spaces, and max 25 characters: ");
	scanf("%s", sWord);
	//we will be using other operations for suchs gets() 

	//for loop
	for( int dCtr = 0; dCtr < 25; dCtr++ ){
		switch( sWord[dCtr] ){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u': 
				dVowelCount++;
				sWord[dCtr] = 'X';
				break; 
		}//endswitch
	}//endfor

	//print the final word
	printf("\n There are %d vowels in the the word. ", dVowelCount);
	printf("\n The resulting is now %s", sWord);
	return 0; 
}


