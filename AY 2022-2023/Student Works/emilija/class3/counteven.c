#include <stdio.h>

int main()
{
	//declare variables
	int dArr[5], dEvenCount=0;
	//using for loop for input
	for (int dCtr = 0; dCtr < 5; dCtr++){
		printf("\nEnter number %d: ", dCtr+1);
		scanf("%d", &dArr[dCtr]);

		//check if even
		if ( dArr[dCtr]%2==0 )
		{
			dEvenCount++;
		}//enif
	}//endfor
	printf("\nYou have entered %d even elements in the array.\n", dEvenCount);

	return 0;
}