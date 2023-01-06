#include<stdio.h>

int main(){
	//declare variables
	int dNum1;
	float fNum2,fSum;
	double lfNum3;
	//ask user for input
	printf ("\n Enter an integer: ");
	scanf ("%d", &dNum1);
	printf ("\n Enter a float value: ");
	scanf ("%f", &fNum2);
	printf ("\n Enter a double: ");
	scanf ("%lf", &lfNum3);
	//Can enter all in one scanf ====> scanf("%d%f%lf", &dNum1, &fNum2, &lfNum3)
	//We process the adding
	fSum = dNum1 + fNum2 + lfNum3;
	//Print the value
	printf ("\n The sum of %d %.2f and %lf is %.3f. \n", dNum1, fNum2, lfNum3, fSum);

	//Check if dNum1 is odd or even without using %
	if (dNum1/2*2==dNum1){
		printf("\n Also %d is even. \n", dNum1);

	}//endif
	else printf("\n Lol %d is odd. \n", dNum1);

	return 0;
} //endmain
