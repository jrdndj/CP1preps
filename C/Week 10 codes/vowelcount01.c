/*
	A C program that counts the number of vowels in a pre-defined c-string
*/
#include<stdio.h>

int main(){
	//declare variables
	int dVowelCount =0; //this is counter 
	char sWord[10] = {'j', 'o', 'r', 'd', 'a', 'n'};

	//for loop that will count the vowels
	for ( int dCtr = 0; dCtr < 10; dCtr ++){
		//switch statement to count the vowels
		switch( sWord[dCtr] ){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				dVowelCount++;
				break;
		}//endswitch
	}//endfor
	printf("\n There are %d vowels in the word. \n", dVowelCount);

	return 0;
}

