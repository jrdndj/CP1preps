/*write a program that asks for integer, float, double input
print sum in float data type with 3 decimal places
*/
#include <stdio.h>

int main(){
	//declare variable
	int dNum1;
	float fNum2, fSum;
	double lfNum3;

	//ask te user
	printf("\n give me an integer: ");
	scanf("%d", &dNum1);

	printf("\n give me an float: ");
	scanf("%f", &fNum2);

	printf("\n give me an double: ");
	scanf("%lf", &lfNum3);


	//do the adition using implied typecasting
	fSum = dNum1 + fNum2 + lfNum3;

	//print the sum

	printf("\n The sum of %d, %.1f, and %.2lf is %.3f\n", dNum1, fNum2, lfNum3, fSum);
	
	return 0;
}