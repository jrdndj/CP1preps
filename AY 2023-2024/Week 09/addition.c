/*
	This program asks two number inputs from the user
	one at a time.
	The program then prints the sum of these two inputs.

	filename: addition.c
*/
#include<stdio.h>

int main(){
	//declare variables
	int num1, num2, sum; 
	
	//tell the user to give a number
	printf("\n Enter first number: ");
	//actually get the input from the user
	scanf("%d", &num1);

	//tell the user to enter second number
	printf("\n Enter second number: ");
	//actually get the second input from the user
	scanf("%d", &num2);

	//compute for the sum
	sum = num1 + num2;

	//we need to print the sum
	printf("\n The sum of %d and %d is %d. ", num1, num2, sum);

	//show off version
	printf("\n The sum of %d and %d is %d. ", num1, num2, num1+num2);

	return 0;
}//end main




