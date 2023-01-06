/*
Write a program that asks for an integer, a float and a double 
input from the user.
Print the sum in float data type with only 3 decimal places
integer 3 4 5 %d
float 6.9      %f
double 3.141618 %f or %lf  lf-long float
typecasting 
explicit int sum = (double)
implicit 
%.3f. - to three decimal places
*/
#include <stdio.h>

int main(){
	//declare variables
	int dNum1;
	float fNum2, fSum;
	double lfNum3;
	//ask for input

	printf("\n Give me an integer: ");
	scanf("%d", &dNum1);

	printf("\n Give me a float: ");
	scanf("%f", &fNum2);

	printf("\n Give me a double: ");
	scanf("%lf", &lfNum3);

	//we process the adding 

	fSum = dNum1 + fNum2+ lfNum3;

	// print value
	printf("\n The sum of %d %f and %lf is %.3f. \n", dNum1, fNum2, lfNum3, fSum);






	
	return 0;
}//end main 