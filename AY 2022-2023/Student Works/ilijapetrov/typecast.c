// Write a program that asks for an integer, a float and a double input from the user.
//Print the sum in float data type with three decimal places.

#include<stdio.h>

int main(){
	//declare variables
	int dNum1;
	float fNum2, fSum;
	double lfNum3;

	printf("\n Give me an integer: ");
	scanf("%d", &dNum1);

	printf("\n Give me a float: ");
	scanf("%f", &fNum2);

	printf("\n Give me a double: ");
	scanf("%lf", &lfNum3);

	//do the addition using implied typecasting
	fSum = dNum1 + fNum2 + lfNum3;

	//print the sum
	printf("\n The sum of %d, %.1f and %.2lf is %.3f \n", dNum1, fNum2, lfNum3, fSum);

	return 0;
}//end of main