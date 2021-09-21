/* 
	A C program that accepts two digits from the user and prints them, but using functions. 
*/
//pre processor headers
#include<stdio.h>

/* function declarations here */
int getNum(); //getnum will prompt the user for an input and return it for sharing 
// param is empty because it does not receive anything, int return type it returns an int
void printNum( int ); // receives an int type but it does not return anything 

/*  global variables */
//we will not be using any global variables 

/* main function definition */
int main(){
	//declare LOCAL variables here
	int dNum1 = 0, dNum2 = 0 ; 
	int *dPtr; 

	//assign the value of dNum1 to *dPtr; 
	dPtr = &dNum1; //no need for asterisk, only in declaration and passing
	// the address of dNum1 is assigned to the pointer dPtr

	//interactive input printf + scanf
	dNum1 = getNum(); //this is a function call 
	dNum2 = getNum();
	printNum( dNum1 );
	printNum( dNum2 );
	dNum1 = 222;
	printNum( *dPtr );

	return 0; 
}//endmain

/* function definitions here */
int getNum(){
	//local variable for getNum
	int dUserInput = 0; 

	printf("\n Please enter a number: ");
	scanf("%d", &dUserInput);
	//dont forget your return statement 
	return dUserInput; 
}//end get num

void printNum( int dNumber ){
	//no need for local variables 
	printf("\n You have entered %d", dNumber);
	//no need for return statement
}//end printNum()











