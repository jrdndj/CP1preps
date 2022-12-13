#include <stdio.h>

int main()
{
	int dFactor=1;

	//print statements in for loop
	for( ; dFactor<=10; dFactor++ )
	{
		printf("\n %d x %d =    %d \n", dFactor,dFactor,dFactor*dFactor);
	}//end for loop

	return 0;
}