//write a program that asks for an integer, a float and a double input from the user.print the sum in float data type with only 3 decimal places
#include <stdio.h>

int main(){
	//declare variables
	int dNum1;
	float fNum2,fSum;
	double fNum3;


	//ask the user for an input
	printf("\n Give me an integer: ");
	scanf("%d",&dNum1);

	printf("\n Give me a float:");
	scanf("%f",&fNum2);

	printf("\n Give me a double:");
	scanf("%lf",&fNum3);

	//add them where we do implicit casting
	fSum = dNum1 + fNum2 + fNum3;

	//print the solution
	printf("\n The sum of %d, %.1f ,%.2f is %.3f \n", dNum1 ,fNum2, fNum3, fSum);

	return 0;


}//endmain
