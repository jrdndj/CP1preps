#include <stdio.h>
int main(){
	//declare variables
	int dNum1;
	float fNum2, fSum;
	double lfNum3;

	//ask the user
	printf("\n Give me an integer: ");
	scanf("%d", &dNum1);

	printf("\n Give me a float: ");
	scanf("%f", &fNum2);

	printf("\n Give me a double: ");
	scanf("%lf", &lfNum3);

	//do the addition using implied typecast
	fSum= dNum1+fNum2+lfNum3;

	printf("\n The sum od %d, %.1f and %.2lf is %.3f\n", dNum1, fNum2, lfNum3, fSum);

	return 0;
}
