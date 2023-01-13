// int 3, 69  %d
// float 3.14  %2f
// double 3.1242352
#include <stdio.h>

int main(){

	int dNum1;
	float fNum2, fSum;
	double fNum3;

	//ask for input
	printf("\n Give me an integer: ");
	scanf("%d", &dNum1);

	printf("\n Give me a float: ");
	scanf("%f", &fNum2);

	printf("\n Give me a double: "); 
	scanf("%lf", &fNum3);

	//add them where we do implicit casting
	fSum = dNum1 + fNum2 + fNum3;

	//print the solution
	printf("\n The sum of %d, %.1f, and %.2f is %.3f \n", dNum1, fNum2, fNum3, fSum); 

	return 0;
} //endmain
