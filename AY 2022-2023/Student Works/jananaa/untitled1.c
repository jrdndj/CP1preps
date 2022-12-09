#include <stdio.h>
int main()
{
	
	//declare variable
	int dNum1;
	float fNum2, fSum;
	double lfNum3;

	//ask the user for input
	printf("\n Give me an int: ");
	scanf("%d", &dNum1);

	printf("\n Give me a float: ");
	scanf("%f", &fNum2);

	printf("\n Give me a double: ");
	scanf("%lf", &lfNum3);

	//check if dNum1 is odd or even without using %
	if (dNum1/2*2==dNum1)
	{
		printf("\n Also %d is even. \n", dNum1);
	}//endif
	else printf("\n Lol %d is odd. \n", dNum1);

	return 0;
}//endmain

/*dNum1 96 9 6 
96/10 = 9
96%10 = 6

496
dNum1/100 = 4
(dNum1%100)/10 = 9
(dNum1%100)%10 = 6 
(dNum1%10) = 6