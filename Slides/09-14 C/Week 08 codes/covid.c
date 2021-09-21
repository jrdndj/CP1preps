/* This program was written by Jordan */

//this program will use arithmetic operators in C
#include<stdio.h>

int main(){
	//declare variables
	int num1, num2;

	//declare input variables
	int input1, input2;

	//initialize values
	int quotient = 0; 

	//assign values to variables
	num1 = 3;
	num2 = 2;

	//perform the operation
	quotient = num1 / num2;

	//we need to print the results
	//printf("\n The quotient is %d", quotient);
	printf("\n The int quotient of %d and %d is %d", num1, num2, quotient);

	//interactive input
	printf("\n Please enter value for input1: ");
	scanf("%d", &input1);

	printf("\n Please enter value for input2: ");
	scanf("%d", &input2);

	quotient = input1 / input2;

	printf("\n The int quotient of %d and %d is %d", input1, input2, quotient);


	return 0; 
}//end main




