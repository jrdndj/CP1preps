/* This program is written by Jordan*/
//this program shall use operators in C
#include<stdio.h>

int main(){
	
	//variable names must be unique
	//declare the variables
	int factor1, factor2;
	//these are for user inputs
	int num1, num2;
	
	//initialize variables
	int product = 0;

	//assigning values to the variables 
	factor1 = 17;
	factor2 = 96;

	//compute and assign the value
	product = factor1 * factor2;

	//print the output
	//printf("Hello! The product is %d", product);
	printf("The product of %d x %d is %d. ", factor1, factor2, product);

	//interactive input where we ask the user for input
	printf("\nPlease enter value for num1: ");
	scanf("%d", &num1);

	printf("\nPlease enter value for num2: ");
	scanf("%d", &num2);

	/*
	printf("Please enter the value for num1 and num2: \n");
	scanf("%d%d", &num1, &num2);
	//the inputs are separated by enter
	*/

	//product is a variable its value will change
	product = num1 * num2; 

	//print the latest value
	printf("The product of %d x %d is %d. ", num1, num2, product);


	return 0; 
}//end main