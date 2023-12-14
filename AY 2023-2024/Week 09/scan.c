/* This program is called scan.c
	The program will ask the user for two integer inputs
	and print the product of these two inputs
*/
#include<stdio.h>

int main(){
	//declare variables first
	int input1, input2, product;

	//hungarian notation 
	int dInput1, dInput2; 
	char cLetter; 
	float fValue_of_Pi ; 

	//ask the user one at a time 
	printf("\n Enter first number: ");

	//get the input
	scanf("%d", &input1);

	//ask the user for second input
	printf("\n Enter second number: ");

	//get the second input
	scanf("%d", &input2);

	//compute for the product of two inputs
	product = input1 * input2; 

	//print the product and the two inputs
	printf("\n The product of %d and %d is %d. \n", input1, input2, product);

	printf("\n Product of %d and %d is %d. \n", input1, input2, input1*input2);



	return 0;
}//end main



