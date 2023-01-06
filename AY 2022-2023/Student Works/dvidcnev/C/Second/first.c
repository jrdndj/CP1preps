#include <stdio.h> 

int main() {

	//Declare the 3 numbers
	int dnum;
	float fnum2;
	double fnum3;
	
	printf("\nGive me an integer: "); //asking for an integer
	scanf("%d", &dnum); 

	printf("\nGive me a float: "); //asking for a float with 1 decimal point
	scanf("%f", &fnum2); 

	printf("\nGive me a double: "); //asking for a double with 2 decimal points
	scanf("%lf", &fnum3); 

	float fsum = dnum + fnum2 + fnum3; //summing all the numbers

	printf("\nThe sum of %d, %.1f and %.2f is %.3f \n", dnum, fnum2, fnum3, fsum);

	return 0;
}