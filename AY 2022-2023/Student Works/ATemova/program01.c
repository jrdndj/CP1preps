#include <stdio.h>
int main(){
	int dNum1;
	float fNum2, fSum;
	double lfNum3;

	printf("\n Give me an integer: ");
	scanf("%d", &dNum1);
	printf("\n Give me an float: ");
	scanf("%f", &fNum2);
	printf("\n Give me an double: ");
	scanf("%lf", &lfNum3);

	fSum = dNum1 + fNum2 + lfNum3;
	printf("\n The sum of %d %.2f and %lf is %.3f. \n", dNum1, fNum2, lfNum3, fSum);

	//check if dNum1 is odd or even without using %
	if (dNum1/2*2==dNum1){
		printf("\n Also %d is even. \n", dNum1);
	}//endif
	else printf("\n Lol %d is odd. \n", dNum1);

	return 0;
}
