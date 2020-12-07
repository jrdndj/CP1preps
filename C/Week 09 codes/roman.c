/* 
	Roman Numerals I, V, X, L, C, D, M
	I - 1, V - 5, X - 10, L - 50, C - 100, D - 500, M - 1000
	2020 = MMXX
	1994 = MCMXCIV
	Hindu-Arabic Numberals, 1, 2, 3,4 5, etc

	A program that will allow an input of character and determine if it is a valid roman numeral

	Keep accepting an input until the user enters 0. 
*/
#include<stdio.h>

int main(){
	//declare variables
	char cInput='0';
	//enter and repeat if cinput is not zero
	// 0 is it ASCII zero , '0' is it the zero character 
	do{
		//prompt the user for a single character input
		printf("\n Please enter a single letter in upper case: ");
		scanf(" %c", &cInput);

		//evaluate the input using switch
		switch( cInput ){
			case 'I': 
			case 'V': 
			case 'X':
			case 'L':
			case 'C':
			case 'D':
			case 'M': 
				printf("\n %c is a valid roman numeral character. ", cInput); 
				break; 
			case '0':
				printf("\n The user has decided to terminate the program. "); 
				break;
			default: 
				printf("\n %c is NOT a valid roman numeral character. ", cInput);
				break;
		}//endswitch
	}while( cInput != '0' );
	printf("\n Thank you for using our program!");
	//program end 
	return 0; 
}