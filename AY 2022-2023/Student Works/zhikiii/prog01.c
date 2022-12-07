/* aks for integer, float and a double input. 
Print the sum in float data type with 3 decimal places xD

integer			3 4 9		%d
float			9.9			%f
double			3.14235634	%lf

typecasting
explicit int sum = (double)
implicit

*/
#include <stdio.h>

int main(){
	//declare variables
	int dNum1;
	float fNum2, fSum;
	double lfNum3;

	//ask the user for input
	printf("\nGIve me an integer: ");
	scanf("%d", &dNum1);

	printf("\nGIve me a float: ");
	scanf("%f", &fNum2);

	printf("\nGive me a double: ");
	scanf("%lf", &lfNum3);

	//we process the addings
	fSum = dNum1 + fNum2 + lfNum3;

	//[rint the value
	printf("\nThe sum of %d %.2f and %lf is %.3f.\n", dNum1, fNum2, lfNum3, fSum);

	//check if dNum1 is odd or even without using %
	if(dNum1/2*2==dNum1)
		printf("\nAaand%d is even, LoL", dNum1);
	else
		printf("\nAaand%d is odd, LoL", dNum1);


	return 0;
} //end main