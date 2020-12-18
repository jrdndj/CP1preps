/* 
	A C program that accepts two numbers and computes the sum and then print it
	but using functions 
*/
//pre processor headers
#include<stdio.h>

/* global variables */
int *dPtr;

/* function declarations here */
int getNum();
int getSum( int, int ); 
void printNum( int ); 

//main function
int main(){
	//declare our LOCAL variables here 
	int dNum1 = 0, dNum2 = 0, dSum = 0; 
	

	//assign the address of sum to dptr
	dPtr = &dSum; 

	//interactive input
	dNum1 = getNum(); //function call 
	dNum2 = getNum();  

	//getSum
	dSum = getSum( dNum1, dNum2 );
	dSum = getSum( dSum, getNum() );
	printNum( dNum1 );
	printNum( dNum2 );
	printNum( dSum );
	printNum( *dPtr );
	return 0; 
}//end main

/* function definitions here */
int getNum(){
	//declare LOCAL variables
	int dInput = 0; 

	printf("\n Please enter a number: ");
	scanf("%d", &dInput);
	return dInput; 
}//endgetnum

int getSum( int dAdd1, int dAdd2 ){
	//local variables
	int dSum; 
	dSum = dAdd1 + dAdd2; 
	return dSum;
}//end getsum

void printNum( int dNum ){
	printf("\n %d", dNum);
}//end printNum







