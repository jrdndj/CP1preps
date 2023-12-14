/* This program is called Scan01.c 
   This program will receive two integer inputs from the user
   and print the sum
*/
#include<stdio.h>

int main(){
	//declare variables 
	int num1, num2, sum;
	int dNum1, dNum2, dSum;
	char cInput; // %c
	float fRate; // %f 

	//ask the user for input - one input at a time
	printf("\n Enter first number: ");
	//get input from the user
	scanf("%d", &num1);

	//ask the user for the second input
	printf("\n Enter second number: ");
	//get second input
	scanf("%d", &num2);

	//compute the sum
	sum = num1 + num2; 

	//print all three variables 
	printf("\n The sum of %d and %d is %d.\n", num1, num2, sum);

	printf("The sum of %d and %d is %d. ", num1, num2, num1+num2);

	return 0;
}//end main







