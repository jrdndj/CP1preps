/*
	A C Program that gets a character input from the user determines if it is a roman numeral. 
	I - 1
	II - 2
	III - 3
	IV - 4
	V - 5
	X - 10
	L - 50
	C - 100
	D - 500
	M - 1000

	check if the character is a letter in roman numerals 
	keep accepting inputs from the user until the user enters 0. 
*/
#include<stdio.h>

int main(){
	//declare our variables
	char cInput = '0'; 

	do{
		//prompt the user for an input
		printf("\n Please enter a character. \n");
		printf("\n This character will be checked if it is a roman numberal character. ");
		scanf(" %c", &cInput); //there should be a space " %c" else , the console may have issues

		switch( cInput ){
			case 'I': 
			case 'V': 
			case 'X': 
			case 'L': 
			case 'C': 
			case 'D': 
			case 'M': 
				printf("\n %c is a valid letter in roman numerals. \n", cInput); 
				break;
			case '0': 
				printf("\n The user has decided to end the program. \n");
				break; 
			default: 
				printf("\n Unfortunately %c is not a valid roman numeral letter. \n", cInput);
				break;
		}//end switch
	}while( cInput !='0' );//endwhile
	printf("\n Thank you for using our program!");
	return 0; 
}










