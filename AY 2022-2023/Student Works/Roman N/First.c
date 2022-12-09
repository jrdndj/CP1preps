#include<stdio.h>

int main(){

	int dNum1;
	float fNum2, fSum;
	double lfNum3;

	printf("\n Enter an integer: ");
	scanf("%d", &dNum1);

	printf("\n Enter a float: ");
	scanf("%f", &fNum2);

	printf("\n Enter a double: ");
	scanf("%lf", &lfNum3);

	fSum = dNum1 + fNum2 + lfNum3;

	printf("\n The sum of %d, %.1f and %.2lf is %.3f is %.3f\n", dNum1, fNum2, lfNum3, fSum);

return 0;
}