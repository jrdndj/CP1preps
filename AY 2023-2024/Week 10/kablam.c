/*
	This program accepts a character input from the user.
	The program uses switch to check the character input. 

	if the character is either K B L M then we print "Kablam"
	if the character is either AZNG then we print "Bazinga"

	filename: kablam.c
*/
#include<stdio.h>

int main(){
	//declare variables
	char cInput; // we use %c

	printf("\n Please enter a large character: ");
	scanf(" %c", &cInput);  //do not forget the extra space

	//now we do switch
	switch(cInput){
	case 'K':  
	case 'B': 
	case 'L':
	case 'M': 
		printf("\n Kablam! "); 
		break;
	case 'A': 
	case 'Z':
	case 'N':
	case 'G': 
		printf("\n Bazinga! ");
		break; 
	default: //this is a must have 
		printf("\n I do not recognize that character. ");
		break; 
	} //end switch

	return 0; 
}//endmain


