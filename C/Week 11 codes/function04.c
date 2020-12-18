/* 
	A C program that accepts two numbers and computes the average and prints it
*/
// pre processor headers
#include<stdio.h>

/* function declarations here */ 
int getNum(); // empty because it doesnot receive anything from the caller 
// it has int which means it has return type int 
float computeAve( int, int ); //it receives two integers from the caller
//and it returns float 
void printAve( float );

/* global variables here */

int main(){
	//declare LOCAL variables here 
	int dNum1=0, dNum2=0;
	float *fPtr; //this is a pointer to a float data type
	float fAve=0;  

	//you assign an address to a pointer, no asterisk, but use ampersand
	fPtr = &fAve; 

	//interactive input 
	dNum1 = getNum(); //function call 
	dNum2 = getNum(); 

	fAve = computeAve( dNum1, dNum2 );
	printAve( fAve );
	fAve = 3.14;
	printAve( *fPtr ); //use the asterisk to print the value referenced by the pointer, not the addr

	return 0; 
}//endmain 

/* function definitions */ 
int getNum(){
	//declare LOCAL variables 
	int dUserInput=0;

	//reusable interactive input
	printf("\n Please enter a number: ");
	scanf("%d", &dUserInput);

	return dUserInput;
}//end getNum

float computeAve( int dNum1, int dNum2 ){
	float fAve;
	fAve = (dNum1 + dNum2)/2;
	return fAve; 
}//end compute Ave

void printAve( float fNum ){
	printf("\n Average of two numbers is %2.f \n", fNum);
	//no need for return sttement
}//endprintAve




