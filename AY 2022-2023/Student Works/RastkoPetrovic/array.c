#include<stdio.h>

int main()
{
	int dArr[10], dOddCtr;

	for (int dCtr = 0; dCtr < 10; ++dCtr)
	{
			printf("\n Please enter a number for slot %d: ", dCtr);
			scanf("%d", &dArr[dCtr]);
	}
	printf("\n");

	for (int dCtr = 0; dCtr < 10; ++dCtr)
	{
		printf("%d ", dArr[dCtr]);
		if (dArr[dCtr] % 2 !=0)	
		{
			dOddCtr++;
		}
	}

	printf("\n There are %d odd number in your array.\n", dOddCtr);

	return 0;
}