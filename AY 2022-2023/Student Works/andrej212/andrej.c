#include<stdio.h>

int main(){
	int dNum1;
	float fNum2,fSum;
	double lfNum3;

	printf("\n Give me an integer:" );
	scanf("%d", &dNum1);

	printf("\n Give me a float:" );
	scanf("%f", &fNum2);

	printf("\n Give me a double:" );
	scanf("%lf", &lfNum3);

	fSum = dNum1 + fNum2 + lfNum3;
	printf("\n The num of %d %.2f and %lf is %.3f. \n", dNum1, fNum2, lfNum3, fSum);

return 0;

}//hyhu