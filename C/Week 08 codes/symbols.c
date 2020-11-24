/* This program has been written by Jordan */

//this program will allow us to use the operators in C
#include<stdio.h>

int main(){
	
	//declare some variables
	int sub1, sub2; 
	//initialization
	int diff=0; 

	//some variables for scanning or input
	int num1, num2, num3;
	int results=0;

	//lets assign some values for sub1 and sub2
	sub1 = 69;
	sub2 = 11;

	//compute the difference
	diff = sub1 - sub2; 

	//print the results
	printf("\nThe difference is %d .\n", diff);
	printf("\n The difference of %d - %d is %d. ", sub1, sub2, diff);

	//interactive input - asking the user for an input
	printf("\nPlease enter value for num1: ");
	scanf("%d", &num1);

	printf("\nPlease enter value for num2: ");
	scanf("%d", &num2);

	printf("\nPlease enter value for num3: ");
	scanf("%d", &num3);

	/*
	printf("\nPlease enter value for num1, num2, and num3: ");
	printf("\nSeparate the inputs by using enter");
	scanf("%d %d %d", &num1, &num2, &num3);
	*/
	//compute
	results = num1 * num2 / num3 + 2;

	printf("\nThe resulting answer is %d. \n", results);

	return 0; 
}//endmain



