/*
	cipher = encrypt or to hide
	decipher = to unlock the code 

	you will receive an input word (c-string) from the user and you replace all vowels with a 
	a different character
	restrict it to 12 characters
	0, 1, 2, 3, 4, 5, 6, 7 8, 9, 10 11
	a = 5, e, i = X, o, u = Q
*/
#include<stdio.h>


int main(){
	//declare variables
	char sInput[12]; // array of characters C-string
	// |0|1|2|3|4|5|6|7|8|9|10|11| indices is from 0-11 (that's 12!)

	//prompt the user for an input
	printf("\nPlease enter a word max 12 characters: ");
	scanf("%s", sInput); //no ampersand
	//if we want spaces in our text inpput we shall gets()

	//cipher using the for loop
	for( int dCtr=0; dCtr < 12; dCtr++  ){
		switch( sInput[dCtr] ){
			case 'a': 
				sInput[dCtr] = '5';
				break;
		 	case 'e':
		 	case 'i':
		 		sInput[dCtr] = 'X';
		 		break;
		 	case 'o':
		 	case 'u':
		 		sInput[dCtr] = 'Q';
		 		break;
		 	default: 
		 		break; 
		}//endswitch
	}//end for
	printf("\n\n The new string has been encrypted. ");
	printf("\n Your string is now %s. ", sInput);
	return 0; 
}









