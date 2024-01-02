/*
	The program accepts a character from the user.
	The program then checks the character if is any of the following:
	a, c, f, g = print Bazinga
	b, e, i = print Kablam

	filename: checkchar.c

*/
#include<stdio.h>

int main(){
	//declare variables
	char cInput; 

	printf("\n Please enter a small character: ");
	scanf(" %c", &cInput);

	switch(cInput){
		case 'a': 
		case 'c':
		case 'f':
		case 'g': {
			printf("\n Bazinga! ");
			break; 
		}//endcase g
		case 'b':
		case 'e':
		case 'i': {
			printf("\n Kablam! ");
			break;
		}//end case i
		default: 
			printf("\n Character not recognized. \n ");
			break;  
	}//endswitch
	return 0;
}//end main




