/* 
	program that accepts a character input from the user
	and determines if it is a vowel or not
	english alphabet = a, e, i, o, u , A, E, I, O, U 
	anything consonants 

	keep asking from the user until they enter the number 0 as an exit 
*/
#include<stdio.h>

int main(){
	//declare our variables
	char cUI; //UI = user input

	//add a controlling loop here 
	while( cUI != '0' ){
		//interactive input for the user
		printf("\n Please enter a single character: ");
		scanf(" %c", &cUI);
		switch( cUI ){
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
				printf("\n The character %c is a vowel.\n ", cUI);
				break;
			case '0':
				printf("\n You have decided to terminate. \n");
				break;
			default: 
				printf("\n The character %c is probably a consonant.\n", cUI);
				break;
		}//endswitch
	}//endwhile
	printf("\n Thank you for using our program. \n" );
	return 0;
}//endmain 

