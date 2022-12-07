//prigram that asks for an integer, a float and a double input from the user.
//print the sum in float data type with only 3 decimal places
// float %f
// int %d
//double %f, %lf
#include <stdio.h>

int main(){
	//declare variables
	int dNum1;
	float fNum2, fSum;
	double lfNum3;

	//ask the user for input
	printf("\n Give me an integer: ");
	scanf("%d", &dNum1);

	printf("\n Give me a float: ");
	scanf("%f", &fNum2);

	printf("\n Give me a double: ");
	scanf("%lf", &lfNum3);

	//we process the adding
	fSum=dNum1+fNum2+lfNum3;

	//printing the value
	printf("\n The sum od %d %.2f and %lf is %.3f. \n", dNum1, fNum2, lfNum3, fSum);

	//odd or even without using %
	if ( dNum1/2*2==dNum1 )		printf("\n Also %d is even. \n", dNum1);
	else printf("\n Also %d is odd. \n", dNum1);


	return 0;
}//endmain