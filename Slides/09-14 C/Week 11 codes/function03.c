/* 
	A C program that accepts two characters from the user and prints them. 
	but using (reusable) functions 
*/
// preprocessor headers (globally)
#include<stdio.h>

/* function declarations here */
char getLetter(); // empty parameter, it doesnt receive anything from the caller
// it returns a char type to the caller 
void printLetter( char ); //non empty, it receives something from the caller
// it doesnt need to return anything 
 
/* global variable declarations here */

int main(){
	//declare LOCAL variables 
	char cLetter1, cLetter2; 
	char *cPtr; //this is a pointer
	//char cLetter[10]; 
	//for (){ cLetter[ctr] = getLetter(); printLetter( cLetter[ctr])}
	
	//assign address
	cPtr = &cLetter2; //the address of cLetter is assigned to cptr
	//interactive input here but using functions 
	cLetter1 = getLetter(); //this is a function call, where the value returned is given to cLetter1
	cLetter2 = getLetter(); //we have reusable code 
	printLetter( cLetter1 );
	printLetter( cLetter2 );
	cLetter2 = 'Q';
	printLetter( *cPtr ); //
	return 0; 
}//endif

/* function definitions go here */
char getLetter(){
	//declare LOCAL variables to getLetters
	char cInput;

	//this is now where the interactive input happens
	printf("\n Please enter a character: ");
	scanf(" %c", &cInput);
	//dont forget a return char statement later
	return cInput;  
	//the value of cInput is passed to the caller 
}//endgetletter

void printLetter( char cValue ){
	printf("\n You have typed the character %c", cValue);
	//no need for return statement
}//endprintLetter












