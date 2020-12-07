/* 
	this program will check if a input character is a 
	vowel in the english alphabet
	vowels = a, e, i, o, u 
	everything else we call them as consonants 

	keep asking an input from the user until the user enters the character 0
*/
#include<stdio.h>
int main(){
	//declare our variables
	char cInput; 

	//even though zero 0 is an integer, since its data type is char, we compare it like a char
	while( cInput != '0' ){
		//interactive input, prompt the user to enter values
		printf("\n Enter a single character:  \n");
		scanf(" %c", &cInput);

		//we use switch to check if it is a vowel
		switch( cInput ){
			case 'a': 
			case 'e':  
			case 'i': 
			case 'o': 
			case 'u': 
				printf("\n %c is a vowel. \n", cInput); 
				break;
			case '0':
				printf("\n User has decided to end the program. \n");
				break; 
			default:
				printf("\n %c is a probably a consonant. \n", cInput); 
				break;  
		}//endswitch
	}//endwhile
	printf("\n Thank you for using the program! \n");
	return 0; 
}