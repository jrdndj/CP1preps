/*
	This program asks the user for an integer input
	one at a time.
	Then the program prints the product of these two 
	inputs.

	filename: times.c
*/
#include<stdio.h>

int main(){
	//declare variables
	int input1, input2, product;

	//ask the user for an input 
	printf("\n Enter number 1: ");

	//actually get the input from the user
	scanf("%d", &input1); 

	//ask the user for the second input
	printf("\n Enter number 2: ");

	//get the second input
	scanf("%d", &input2);

	//compute for the product
	product = input1 * input2;

	//print the values
	printf("\n The product of %d and %d is %d.\n", input1, input2, product);

	//print the value straight without assigning it
	printf("\n The product of %d and %d is %d.\n ", input1, input2, input1*input2);



	return 0;
}//endmain





