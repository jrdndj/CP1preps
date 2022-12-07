/*
gcc file.c 
./a.out

write a program that 
asks for an integer, a float and a 
double input from the user print the 
sum in float data type with 3 dec places

int 3 %d
float 6.8 %f
double 3.456464 %f, %lf

typecasting
explicit int sum = (double)
implicit

*/

#include <stdio.h>

int main()
{
	//declare variable
	int dNum1;
	float fNum2, fSum;
	double lfNum3;

	//ask the user for input
	printf("\n Give me an int: ");
	scanf("%d", &dNum1);

	printf("\n Give me a float: ");
	scanf("%f", &fNum2);

	printf("\n Give me a double: ");
	scanf("%lf", &lfNum3);

	/*printf("\n Give me an int: ");
	scanf("%d%f%lf", &dNum1, &fNum2, &lfNum3);*/

	//we process the adding
	fSum = dNum1 + fNum2 + lfNum3;

	//print the value
	printf("\n The sum of %d %.2f and %lf is %.3f. \n", dNum1, fNum2, lfNum3, fSum);


	return 0;
}//endmain