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

	//CHEC ODD OR EVEMN WITHOUT %
	if( dNum1/2*2==dNum1){
		printf("\n also %d is even. \n",dNum1);
	}
	else printf("\n also %d is odd. \n",dNum1);



return 0;

}
