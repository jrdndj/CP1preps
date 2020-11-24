/* this program is written by Jordan */
//this program will use operators in C
#include<stdio.h>

int main(){
	
	//declare variables first
	int num1, num2, num3, num4;
	int input1, input2, input3;

	//initialize a specific variable 
	int result = 1;

	//assign values to the numbers
	num1 = 69;
	num2 = 420; 
	num3 = 0; 
	//the value of num4 changes as num1 and num2 changes
	num4 = num1 * num2;

	//compute for the value
	result = num1 + num2 * num3 / num4;

	//print
	//printf("\nThe result is %d. \n", result);
	printf("\n The result of %d + %d * %d / %d is %d. \n", num1, num2, num3, num4, result);

	//interactive input
	printf("\nPlease enter the value for input1: ");
	scanf("%d", &input1);

	printf("\nPlease enter the value for input2: ");
	scanf("%d", &input2);

	printf("\nPlease enter the value for input3: ");
	scanf("%d", &input3);

	num1 = input1;
	num2 = input2;
	num3 = input3;

	result = num1 + num2 * num3 / num4;

	printf("\n The result of %d + %d * %d / %d is %d. \n", num1, num2, num3, num4, result);
	/*
	printf("\nPlease enter the value for input1, input2, input3: ");
	scanf("%d%d%d", &input1, &input2, &input3);
	//user input is separated by space/enter
	//if the user commits a mistake, there will be stack overflow */
	return 0;

}//endmain






