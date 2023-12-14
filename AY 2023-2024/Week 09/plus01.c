/*
	This program lets the user enter two numbers
	one at a time.
	The program then prints the sum of these two numbers. 

	Filename: plus01.c
*/
#include<stdio.h>

int main(){
	//declare variables
	int num1, num2, sum;

	//ask the user to enter first number
	printf("\n Enter number 1: ");

	//actually need to get the input
	scanf("%d", &num1);

	//ask the user to enter the second number
	printf("\n Enter number 2: ");

	//get the second input
	scanf("%d", &num2);

	//compute for the sum
	sum = num1 + num2;

	//print the value 
	printf("\n The sum of %d and %d is %d. ", num1, num2, sum);

	//without using the sum variable
	printf("\n The sum of %d and %d is %d. ", num1, num2, num1+num2);

	return 0;
}//end main








